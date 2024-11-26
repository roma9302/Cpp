//number 1
#include <stdio.h>
#include <math.h>

int main() {
    // Инициализация и декларация
    double pi = 3.1415, a = -pi / 2, b = pi / 2,
        h = pi / 10, x, y, temp, min, max;

    min = max = 0; // Инициализация min и max
    int i = 0; // Порядковый номер
    x = a;

    // Инициализация y для первого значения
    y = pow(x, 2) * cos(x) * sin(x);
    min = max = y; // Устанавливаем начальные значения min и max

    while (x <= b) {
        temp = y; // Для хранения предыдущего значения функции
        y = pow(x, 2) * cos(x) * sin(x); // Измененная функция

        i++; // Наращивание порядкового номера
        printf("#%3d x=%6.2f y=%6.2f", i, x, y); // Вывод результата как в условии

        // Определение возрастания и убывания
        if (y > temp) {
            printf(" function up\n");
        }
        else {
            printf(" function down\n");
        }

        // Обновление min и max
        if (min > y) min = y;
        if (max < y) max = y;

        x += h; // Шаг здесь
    }

    // Вывод min и max
    printf("min=%6.2f, max=%6.2f\n", min, max);

    return 0;
}


//number 2
#include <stdio.h>
#include <math.h>

int main() {
    const double pi = 3.1415; // Константа pi
    const double a = 0.1, b = 1.0, h = 0.1; // Константы для диапазона и шага
    double s, y, x = a;
    int k, n;

    printf("Введите n (положительное целое число): ");

    // Проверка корректности ввода
    if (scanf_s("%d", &n) != 1 || n <= 0) {
        printf("Ошибка: n должно быть положительным целым числом.\n");
        return 1; // Завершение программы с кодом ошибки
    }

    while (x <= b) {
        s = 0; // Обнуляем s перед каждой итерацией
        for (k = 1; k <= n; k++) {
            s += pow(-1, k + 1) * ((pow(x, 2 * k + 1)) / (4 * k * k) - 1);
        }

        y = ((1 + pow(x, 2)) / 2) * atan(x) - (x / 2);

        // Исправлено на %6.2f для третьего значения
        printf("%6.2f %6.2f %6.2f\n", s, y, s - y);

        x += h; // Шаг здесь
    }

    return 0;
}
