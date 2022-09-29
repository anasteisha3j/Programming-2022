#include <iostream>
using namespace std;
int main()
{
	float number1;
	float number2;
	cout << "Enter number1 and number2" << endl;
	cin >> number1;
	cin >> number2;
	cout << "arithmetic mean=" << (number1 + number2) / 2 << endl;
	cout << "geometric mean=" << sqrt(number1 * number2) << endl;
}
