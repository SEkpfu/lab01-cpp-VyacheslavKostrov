#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b, s, r, p;
	cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;

		s = a + b;
		cout << "Сумма: " << s << endl;
		r = a - b;
		cout << "Разность: " << r << endl;
		p = a * b;
		cout << "Произведение: " << p << endl;

		return 0;
}