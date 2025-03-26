#include <iostream>
#include <cmath>
using namespace std;

double perimetr(double a, double b, double c) {
    return a + b + c;
}

double square(double a, double b, double c) {
    double halfper = (a + b + c) / 2;
    return sqrt(halfper * (halfper - a) * (halfper -b) * (halfper - c));
}

 double mir(double a, double b, double c) {
    return ( a==b || b == c || c == a);
} 

int main() {
    double a, b, c;
    while (true) {
        cout << "Enter the 3 sides of treugolnik:)";
        cin >> a >> b >> c;

        // Проверка на нулевые или отрицательные значения
        if (a <= 0 || b <= 0 || c<=0) {
            cout << "Невозможные значения! Попробуйте ещё раз." << endl;
            continue; // Возвращаемся к вводу значений.
        }
        break;
    }


    cout << "Perimeter:  " << perimetr(a, b, c) << endl;
    cout << "Area:  " << square (a, b, c) << endl;
    cout << "Checking for mirroring (1 - true; 0 - false):  " <<  mir(a,b,c)  << endl;
}
