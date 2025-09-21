#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;

	cout << "Чему будет равен x:  ";
	cin >> x;

	double x2 = x * x;  
	double x3 = x2 * x;  
	double x4 = x2 * x2; 
	double x5 = x4 * x; 
	double x6 = x5 * x;

	y = 14 * x6 - x5 + x4 - x3 + x2 - x + 2;

	cout << "y = " << y << endl;
	



	return 0;

}