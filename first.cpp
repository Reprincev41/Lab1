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
    cout << "Enter the 3 sides of treugolnik:)";
    cin >> a >> b >> c;

    cout << perimetr(a, b, c) << endl;
    cout << square (a, b, c) << endl;
    cout << "If budet 0, ne ravnobedrenen, if budet 1 ravnobedrenen: " <<  mir(a,b,c)  << endl;
}
