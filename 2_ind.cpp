#include <iostream>
using namespace std;
int main()
{
	string red = "\033[31m";
	string reset = "\033[0m";

	setlocale(0, "");
	int a;
	cout << "Введите трёхзначное число: ";
	cin >> a;

	if (a >= 100 && a <= 999) {
	
		int one = a / 100;
		int two = (a / 10) % 10;
		int three = a % 10;

		int sum = one + two + three;
		int pr = one * two * three;

		cout << "Сумма всех чисел: " << sum << endl;
		cout << "Произведение всех чисел: " << pr << endl;
		
	}
	else {

		cout << red << "Это не трёхзначное число" << reset << endl;
	}

	return 0;
}