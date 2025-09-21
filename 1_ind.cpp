#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b, s, r, p, c{};


	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;

	a = pow(a, 2);
	b = pow(b, 2);

	s = a + b;
	r = a - b;
	p = a * b;
	c = a / b;
	
	cout << "Сумма квадратов: " << s << endl; 
	cout << "Разность квадратов: " << r << endl;
	cout << "Произведение квадратов: " << p << endl;
	cout << "Частное квадратов: " << c << endl;

		return 0;

	


}