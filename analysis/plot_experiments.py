import csv
from pathlib import Path

import matplotlib.pyplot as plt


METRIC = 'irrigation_total_ms'


def read_metric(csv_path, metric):

    values = []

    with open(
        csv_path,
        'r',
        encoding='utf-8'
    ) as csv_file:

        reader = csv.DictReader(csv_file)

        for row in reader:

            value = row.get(metric, '')

            if value is None:
                continue

            value = value.strip()

            if value == '':
                continue

            try:
                values.append(float(value))

            except ValueError:
                pass

    return values


def load_experiments(base_path, prefix):

    experiments = {}

    for run in ['01', '02', '03']:

        filename = (
            f'experimento_{prefix}_{run}'
            f'_latencies.csv'
        )

        path = base_path / filename

        if not path.exists():
            raise FileNotFoundError(
                f'No se encontró: {path}'
            )

        experiments[
            f'{prefix}_{run}'
        ] = read_metric(
            path,
            METRIC
        )

    return experiments


def merge_experiments(experiments):

    merged = []

    for values in experiments.values():
        merged.extend(values)

    return merged


def create_boxplot(
    values_a,
    values_b,
    values_c,
    output_path
):

    plt.figure(figsize=(8, 6))

    plt.boxplot(
        [
            values_a,
            values_b,
            values_c
        ],
        tick_labels=[
            'A - 1 Hz',
            'B - 1 Hz',
            'C - 10 Hz'
        ],
        showfliers=True
    )

    plt.title(
        'Latencia total del sistema de riego'
    )

    plt.xlabel(
        'Configuración experimental'
    )

    plt.ylabel(
        'Latencia (ms)'
    )

    plt.grid(
        axis='y',
        alpha=0.3
    )

    plt.tight_layout()

    plt.savefig(
        output_path,
        dpi=300
    )

    plt.close()


def create_histogram(
    values_a,
    values_b,
    values_c,
    output_path
):

    plt.figure(figsize=(9, 6))

    plt.hist(
        values_a,
        bins=25,
        alpha=0.5,
        label='A - 1 Hz',
        density=True
    )

    plt.hist(
        values_b,
        bins=25,
        alpha=0.5,
        label='B - 1 Hz',
        density=True
    )

    plt.hist(
        values_c,
        bins=25,
        alpha=0.5,
        label='C - 10 Hz',
        density=True
    )

    plt.title(
        'Distribución de la latencia total del riego'
    )

    plt.xlabel(
        'Latencia (ms)'
    )

    plt.ylabel(
        'Densidad'
    )

    plt.legend()

    plt.grid(
        axis='y',
        alpha=0.3
    )

    plt.tight_layout()

    plt.savefig(
        output_path,
        dpi=300
    )

    plt.close()


def create_time_series(
    experiments,
    configuration,
    output_path
):

    plt.figure(figsize=(11, 6))

    for name, values in experiments.items():

        samples = range(
            1,
            len(values) + 1
        )

        plt.plot(
            samples,
            values,
            label=name,
            alpha=0.8
        )

    plt.title(
        f'Evolución de la latencia total - '
        f'Configuración {configuration}'
    )

    plt.xlabel(
        'Número de muestra'
    )

    plt.ylabel(
        'Latencia (ms)'
    )

    plt.legend()

    plt.grid(
        alpha=0.3
    )

    plt.tight_layout()

    plt.savefig(
        output_path,
        dpi=300
    )

    plt.close()


def main():

    base_path = (
        Path.home()
        / 'agri_ws'
        / 'analysis'
        / 'experiments'
    )

    output_path = (
        Path.home()
        / 'agri_ws'
        / 'analysis'
        / 'plots'
    )

    output_path.mkdir(
        parents=True,
        exist_ok=True
    )

    experiments_a = load_experiments(
        base_path,
        'A'
    )

    experiments_b = load_experiments(
        base_path,
        'B'
    )

    experiments_c = load_experiments(
        base_path,
        'C'
    )

    values_a = merge_experiments(
        experiments_a
    )

    values_b = merge_experiments(
        experiments_b
    )

    values_c = merge_experiments(
        experiments_c
    )

    print(
        f'Muestras A: {len(values_a)}'
    )

    print(
        f'Muestras B: {len(values_b)}'
    )

    print(
        f'Muestras C: {len(values_c)}'
    )

    create_boxplot(
        values_a,
        values_b,
        values_c,
        output_path
        / 'boxplot_riego_A_B_C.png'
    )

    create_histogram(
        values_a,
        values_b,
        values_c,
        output_path
        / 'distribucion_riego_A_B_C.png'
    )

    create_time_series(
        experiments_a,
        'A',
        output_path
        / 'serie_temporal_riego_A.png'
    )

    create_time_series(
        experiments_b,
        'B',
        output_path
        / 'serie_temporal_riego_B.png'
    )

    create_time_series(
        experiments_c,
        'C',
        output_path
        / 'serie_temporal_riego_C.png'
    )

    print(
        '\nGráficas generadas correctamente.'
    )

    print(
        f'Directorio: {output_path}'
    )

    print(
        '\nArchivos generados:'
    )

    print(
        '  boxplot_riego_A_B_C.png'
    )

    print(
        '  distribucion_riego_A_B_C.png'
    )

    print(
        '  serie_temporal_riego_A.png'
    )

    print(
        '  serie_temporal_riego_B.png'
    )

    print(
        '  serie_temporal_riego_C.png'
    )


if __name__ == '__main__':
    main()