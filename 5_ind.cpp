#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main()
{
	setlocale(0, "");
	double x, y;

	cout << "x будет равен: ";
	cin >> x;
	cout << "y будет равен: ";
	cin >> y;

	// Вычисления для первого выражения:

	double part1 = 1 + 1 / (x * x);
	double part2 = pow(part1, x);
	double part3 = 12 * (x * x) * y;
	double part4 = part2 - part3;

	// showpos - показывает +
	// fixed - выводит числа в обычном формате
	// setprecision() - выводит после точки столько чисел, сколько указано в скобках
	// scientific - выводит числа в экспоненциальном формате

	cout << "Ответ на первое выражение: " << showpos << fixed << setprecision(5) << part4 << endl;

	// Вычисления для второго выражения:

	double part5 = x;
	double part6 = 10 * sin(x);
	double part7 = pow(x, 4);
	double part8 = pow(x, 6);
	double part9 = fabs(part7 - part8);
	double part10 = part5 - part6 + part9;

	cout << "Ответ на второе выражение: " << scientific << part10 << endl;

	return 0;











}