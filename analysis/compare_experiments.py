import csv
import sys
import statistics
from pathlib import Path


METRICS = [
    'sensor_to_orchestrator_ms',
    'orchestrator_to_valve_ms',
    'irrigation_total_ms',
    'robot_command_to_cmd_vel_ms'
]


METRIC_NAMES = {
    'sensor_to_orchestrator_ms':
        'Sensor -> Orquestador',

    'orchestrator_to_valve_ms':
        'Orquestador -> Válvula',

    'irrigation_total_ms':
        'Latencia total del riego',

    'robot_command_to_cmd_vel_ms':
        'Orquestador -> cmd_vel del robot'
}


def percentile(values, percentile_value):

    if not values:
        return None

    sorted_values = sorted(values)

    index = int(
        percentile_value
        * (len(sorted_values) - 1)
    )

    return sorted_values[index]


def calculate_statistics(values):

    if not values:
        return None

    mean = statistics.mean(values)
    median = statistics.median(values)
    minimum = min(values)
    maximum = max(values)

    if len(values) > 1:

        stddev = statistics.stdev(values)

        jitter_values = [
            abs(values[i] - values[i - 1])
            for i in range(1, len(values))
        ]

        jitter = statistics.mean(
            jitter_values
        )

    else:

        stddev = 0.0
        jitter = 0.0

    p95 = percentile(
        values,
        0.95
    )

    p99 = percentile(
        values,
        0.99
    )

    return {
        'samples': len(values),
        'mean': mean,
        'median': median,
        'minimum': minimum,
        'maximum': maximum,
        'stddev': stddev,
        'jitter': jitter,
        'p95': p95,
        'p99': p99
    }


def read_csv(csv_path):

    data = {
        metric: []
        for metric in METRICS
    }

    with open(
        csv_path,
        'r',
        encoding='utf-8'
    ) as csv_file:

        reader = csv.DictReader(
            csv_file
        )

        for row in reader:

            for metric in METRICS:

                value = row.get(
                    metric,
                    ''
                )

                if value is None:
                    continue

                value = value.strip()

                if value == '':
                    continue

                try:
                    data[metric].append(
                        float(value)
                    )

                except ValueError:
                    pass

    return data


def merge_experiments(experiment_paths):

    merged_data = {
        metric: []
        for metric in METRICS
    }

    individual_data = {}

    for experiment_path in experiment_paths:

        path = Path(
            experiment_path
        )

        if not path.exists():

            print(
                f'ERROR: no existe {path}'
            )

            sys.exit(1)

        data = read_csv(
            path
        )

        individual_data[
            path.name
        ] = data

        for metric in METRICS:

            merged_data[
                metric
            ].extend(
                data[metric]
            )

    return (
        merged_data,
        individual_data
    )


def calculate_run_jitters(
    individual_data,
    metric
):

    run_jitters = []

    for data in individual_data.values():

        values = data[
            metric
        ]

        if len(values) < 2:
            continue

        differences = [
            abs(values[i] - values[i - 1])
            for i in range(1, len(values))
        ]

        run_jitters.append(
            statistics.mean(
                differences
            )
        )

    return run_jitters


def print_statistics(
    statistics_data
):

    if statistics_data is None:

        print(
            '  No hay datos disponibles.'
        )

        return

    print(
        f"  Muestras: "
        f"{statistics_data['samples']}"
    )

    print(
        f"  Media: "
        f"{statistics_data['mean']:.3f} ms"
    )

    print(
        f"  Mediana: "
        f"{statistics_data['median']:.3f} ms"
    )

    print(
        f"  Mínimo: "
        f"{statistics_data['minimum']:.3f} ms"
    )

    print(
        f"  Máximo: "
        f"{statistics_data['maximum']:.3f} ms"
    )

    print(
        f"  Desviación estándar: "
        f"{statistics_data['stddev']:.3f} ms"
    )

    print(
        f"  P95: "
        f"{statistics_data['p95']:.3f} ms"
    )

    print(
        f"  P99: "
        f"{statistics_data['p99']:.3f} ms"
    )


def print_individual_runs(
    individual_data,
    metric
):

    print(
        '\n  Resultados por ejecución:'
    )

    for filename, data in (
        individual_data.items()
    ):

        values = data[
            metric
        ]

        stats = calculate_statistics(
            values
        )

        if stats is None:

            print(
                f'    {filename}: sin datos'
            )

            continue

        print(
            f'    {filename}: '
            f'n={stats["samples"]}, '
            f'media={stats["mean"]:.3f} ms, '
            f'mediana={stats["median"]:.3f} ms, '
            f'jitter={stats["jitter"]:.3f} ms, '
            f'P95={stats["p95"]:.3f} ms, '
            f'P99={stats["p99"]:.3f} ms, '
            f'máx={stats["maximum"]:.3f} ms'
        )


def print_jitter_summary(
    individual_data,
    metric
):

    run_jitters = calculate_run_jitters(
        individual_data,
        metric
    )

    if not run_jitters:
        return

    print(
        '\n  Jitter entre muestras '
        '(calculado por ejecución):'
    )

    print(
        f'    Media de los jitter '
        f'por ejecución: '
        f'{statistics.mean(run_jitters):.3f} ms'
    )

    if len(run_jitters) > 1:

        print(
            f'    Desviación entre '
            f'ejecuciones: '
            f'{statistics.stdev(run_jitters):.3f} ms'
        )


def print_run_mean_summary(
    individual_data,
    metric
):

    run_means = []

    for data in individual_data.values():

        values = data[
            metric
        ]

        if values:

            run_means.append(
                statistics.mean(values)
            )

    if not run_means:
        return

    print(
        '\n  Variabilidad entre ejecuciones:'
    )

    print(
        f'    Media de las medias: '
        f'{statistics.mean(run_means):.3f} ms'
    )

    if len(run_means) > 1:

        print(
            f'    Desviación de las medias: '
            f'{statistics.stdev(run_means):.3f} ms'
        )


def print_configuration(
    name,
    description,
    merged_data,
    individual_data
):

    print(
        '\n========================================'
    )

    print(
        f'CONFIGURACIÓN {name}'
    )

    print(
        description
    )

    print(
        '========================================'
    )

    for metric in METRICS:

        values = merged_data[
            metric
        ]

        if not values:
            continue

        print(
            f'\n--- '
            f'{METRIC_NAMES[metric]} '
            f'---'
        )

        stats = calculate_statistics(
            values
        )

        print_statistics(
            stats
        )

        print_individual_runs(
            individual_data,
            metric
        )

        print_jitter_summary(
            individual_data,
            metric
        )

        print_run_mean_summary(
            individual_data,
            metric
        )


def print_main_comparison(
    configurations
):

    print(
        '\n========================================'
    )

    print(
        'RESUMEN COMPARATIVO'
    )

    print(
        'LATENCIA TOTAL DEL RIEGO'
    )

    print(
        '========================================'
    )

    metric = 'irrigation_total_ms'

    for name, merged_data, _ in configurations:

        values = merged_data[
            metric
        ]

        stats = calculate_statistics(
            values
        )

        if stats is None:
            continue

        print(
            f'\n{name}:'
        )

        print(
            f'  n = {stats["samples"]}'
        )

        print(
            f'  Media = '
            f'{stats["mean"]:.3f} ms'
        )

        print(
            f'  Mediana = '
            f'{stats["median"]:.3f} ms'
        )

        print(
            f'  P95 = '
            f'{stats["p95"]:.3f} ms'
        )

        print(
            f'  P99 = '
            f'{stats["p99"]:.3f} ms'
        )

        print(
            f'  Máximo = '
            f'{stats["maximum"]:.3f} ms'
        )


def main():

    base_path = (
        Path.home()
        / 'agri_ws'
        / 'analysis'
        / 'experiments'
    )

    experiment_a_paths = [
        base_path
        / 'experimento_A_01_latencies.csv',

        base_path
        / 'experimento_A_02_latencies.csv',

        base_path
        / 'experimento_A_03_latencies.csv'
    ]

    experiment_b_paths = [
        base_path
        / 'experimento_B_01_latencies.csv',

        base_path
        / 'experimento_B_02_latencies.csv',

        base_path
        / 'experimento_B_03_latencies.csv'
    ]

    experiment_c_paths = [
        base_path
        / 'experimento_C_01_latencies.csv',

        base_path
        / 'experimento_C_02_latencies.csv',

        base_path
        / 'experimento_C_03_latencies.csv'
    ]

    (
        merged_a,
        individual_a
    ) = merge_experiments(
        experiment_a_paths
    )

    (
        merged_b,
        individual_b
    ) = merge_experiments(
        experiment_b_paths
    )

    (
        merged_c,
        individual_c
    ) = merge_experiments(
        experiment_c_paths
    )

    print(
        '\n========================================'
    )

    print(
        'COMPARACIÓN DE EXPERIMENTOS A, B Y C'
    )

    print(
        '========================================'
    )

    print_configuration(
        'A',
        'Sensor + Orquestador + Riego | 1 Hz',
        merged_a,
        individual_a
    )

    print_configuration(
        'B',
        'Sensor + Orquestador + Riego '
        '+ Robot + Gazebo | 1 Hz',
        merged_b,
        individual_b
    )

    print_configuration(
        'C',
        'Sensor + Orquestador + Riego '
        '+ Robot + Gazebo | 10 Hz',
        merged_c,
        individual_c
    )

    configurations = [
        (
            'A',
            merged_a,
            individual_a
        ),
        (
            'B',
            merged_b,
            individual_b
        ),
        (
            'C',
            merged_c,
            individual_c
        )
    ]

    print_main_comparison(
        configurations
    )


if __name__ == '__main__':
    main()