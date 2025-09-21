#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b, s;
	cout << "Введите значение длины: ";
	cin >> a;
	cout << "Введите значение ширины:  ";
	cin >> b;

	s = a * b;

	cout << "Площадь прямоугольника равна: " << s << endl;
	
	return 0;
}