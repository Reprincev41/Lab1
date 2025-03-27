#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, area, p, s;

    
   
    
    cout << "Введите cторону треугольника: ";
    cin >> a;
    
    cout << "Введите сторону треугольника: ";
    cin >> b;

    cout << "Введите сторону треугольника: ";
    cin >> c;
    if((a>0) & (b>0) & (c>0)){
        if((a+c>b) & (a+b>c) & (b+c>a)){
    
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - c) * (p - b));
     cout << " Площадь треугольника равна : " << area << endl;
     cout << endl;
     s = (a+b+c);
      cout << " Периметр треугольника равен : " << s << endl;
      cout << endl; 
     if((a==b) || (b==c) || (a==c))
     {cout << "Треугольник равнобедренный";
         
     }
    }
    }
     return 0;
    
}
