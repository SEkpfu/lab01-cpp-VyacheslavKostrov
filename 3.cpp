#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double c, f, k;
	cout << "Введите температуру в Цельсиях: ";
	cin >> c;

	f = 9.0 / 5.0 * c + 32;
	k = c + 273;
	cout << "Температура в Фаренгейтах: " << f << endl;
	cout << "Температура в Кельвинах: " << k << endl;

		return 0;
}