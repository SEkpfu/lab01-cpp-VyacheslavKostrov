#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;

	cout << "Введите значение n: ";
		cin >> n;

		int chas = n / 3600;
		int minuta = (n % 3600) / 60;
		int sekunda = n % 60;

		cout << "Часов: " << chas << endl;
		cout << "Минут: " << minuta << endl;
		cout << "Секунд: " << sekunda << endl;

		return 0;
}