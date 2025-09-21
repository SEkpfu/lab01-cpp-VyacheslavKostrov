#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b, c, v, s;

	//Здесь попрактиковался в добавлении цветов к определённым строкам

	string red = "\033[31m";
	string magenta = "\033[35m";
	string reset = "\033[0m";

	cout << "Длина параллелепипеда равна: ";
		cin >> a;
		cout << "Ширина параллелепипеда равна: ";
		cin >> b;
		cout << "Высота параллелепипеда равна: ";
		cin >> c;

		v = a * b * c;
		s = 2 * (a*b + b*c + a*c);
		cout << red << "Объём параллелепипеда равен: " << v << endl;
		cout << magenta << "Площадь параллелепипеда равна: " << s << reset << endl;

		return 0;

}