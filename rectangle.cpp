#include <iostream>
#include <cmath> // Для использования функции sqrt() (квадратный корень)

void rectangle() {
    double width, height;

    // Ввод длины и ширины прямоугольника
    std::cout << "Введите длину прямоугольника: ";
    std::cin >> width;
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> height;

    // Вычисления
    double perimeter = 2 * (width + height); // Периметр
    double area = width * height; // Площадь
    double diagonal = sqrt(width * width + height * height); // Длина диагонали по теореме Пифагора

    // Вывод результатов
    std::cout << "Периметр прямоугольника: " << perimeter << std::endl;
    std::cout << "Площадь прямоугольника: " << area << std::endl;
    std::cout << "Длина диагонали: " << diagonal << std::endl;
}

int main() {
    rectangle(); // Вычисления для прямоугольника
    return 0;
}