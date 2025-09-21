#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double v, r;

	cout << "Введите значение радиуса: ";
		cin >> r;

		v = 4 / 3 * M_PI * r * r * r;

		cout << "Объём шара равен: " << v << endl;

		return 0;
}