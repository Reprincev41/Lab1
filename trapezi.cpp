#include <iostream>
#include <cmath>

using namespace std;

double ploshad(double a, double b, double c, double d){
    double midlane = (a+b)/2;
    return midlane * sqrt((pow(c,2)-(pow((pow(a-b,2)+pow(c,2)-pow(d,2))/(2*(a-b)),2))));
}

double perimetr(double a, double b, double c, double d){
    return a+b+c+d;
}

double midlane(double a, double b){
    return (a+b)/2;
}

int main(){
    setlocale(LC_ALL, "rus");
    double a,b,c,d;
    cout << "Введите верхнее основание трапеции: ";
    cin >> a;
    cout << "Введите нижнее основание трапеции: ";
    cin >> b;
    cout << "Введите первую боковую сторону трапеции: ";
    cin >> c;
    cout << "Введите вторую боковую сторону трапеции: ";
    cin >> d;
    cout << "" << endl;

    cout << "Площадь = " << ploshad (a,b,c,d) << endl;
    cout << "" << endl;
    cout << "Периметр = " << perimetr(a,b,c,d) << endl;
    cout << "" << endl;
    cout << "Центральная линия = " << midlane(a,b) << endl;
}
