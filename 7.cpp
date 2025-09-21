#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;

		int sum = (a % 10) + (b % 10);

		cout << "Сумма последних цифр двух чисел равна: " << sum << endl;

		return 0;

}