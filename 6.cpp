#define _USE_MATH_DEFINES

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(0, "");
    double r, h, v, s;

    cout << "Введите значение радиуса: ";
    cin >> r;

    cout << "Введите значение высоты: ";
    cin >> h;

    v = M_PI * pow(r, 2) * h;
    s = 2 * M_PI * r * (r + h);
    cout << "Объём цилиндра равен: " << v << endl;
    cout << "Площадь поверхности цилиндра равна: " << s << endl;
    return 0;
}
