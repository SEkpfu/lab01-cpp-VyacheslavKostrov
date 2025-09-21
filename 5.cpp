#define _USE_MATH_DEFINES;
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double radius, dlina, ploshad;
	cout << "Введите значение площади круга: ";
	cin >> ploshad;

	radius = sqrt(ploshad / M_PI);
	dlina = 2.0 * M_PI * radius;

	cout << "Радиус круга равен: " << radius << endl;
	cout << "Длина круга равна: " << dlina << endl;

		return 0;
}