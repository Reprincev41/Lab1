#include <iostream>
#include <cmath> // usage of sqrt

void rectangle() {
    double length, height;

    // Ввод значений длины и ширины с проверкой на корректность.
    while (true) {
        std::cout << "Введите длину прямоугольника: ";
        std::cin >> length;
        std::cout << "Введите ширину прямоугольника: ";
        std::cin >> height;

        // Проверка на нулевые или отрицательные значения
        if (length <= 0 || height <= 0) {
            std::cout << "Невозможные значения! Попробуйте ещё раз." << std::endl;
            continue; // Возвращаемся к вводу значений.
        }

        break; // Выход из цикла, если все значения корректны.
    }

    // Проверка на квадрат
    if (length == height) {
        std::cout << "Данный прямоугольник - квадрат!" << std::endl;
    }

    // Основные вычисления.
    auto perimeter = 2 * (length + height);
    auto area = length * height;
    auto diagonal = sqrt(length * length + height * height);

    // Результаты
    std::cout << "Периметр прямоугольника: " << perimeter << std::endl;
    std::cout << "Площадь прямоугольника: " << area << std::endl;
    std::cout << "Диагональ прямоугольника: " << diagonal << std::endl;
}

int main() {
    rectangle();
    return 0;
}
