#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "enter a, b, c, d" << endl;
	cin >> a >> b >> c >> d;
	if (a > b - c && a<c + b && b>a - c && b<a + c && c>a - b && c < a + b) {
		double p = (a + b + c) / 2.0;
		cout << "S abc= " << sqrt(p * (p + a) * (p + b) * (p + c)) << endl;;
	}
	else {
		cout << "For S abc - wrong numbers" << endl;
	}
	if (a > d - c && a<c + d && d>a - c && d<a + c && c>a - d && c < a + d)
	{
		double p = (a + c + d) / 2.0;
		cout << "S acd= " << sqrt(p * (p + a) * (p + d) * (p + c))<<endl;
	}
	else {
		cout << "For S acd - wrong numbers" << endl;
	}
	if (a > b - c && a<b + d && d>a - b && d<a + b && b>a - d && b < a + d)
	{
		double p = (a + b + d) / 2.0;
		cout << "S abd= " << sqrt(p * (p + a) * (p + d) * (p + b))<<endl;
	}
	else {
		cout << "For S abd - wrong numbers" << endl;
	}
	if (b > d - c && b<c + d && d>b - c && d<b + c && c>b- d && c < b + d)
	{
		double p = (b + c + d) / 2.0;
		cout << "S bcd= " << sqrt(p * (p + b) * (p + d) * (p + c))<<endl;
	}
	else {
		cout << "For S bcd - wrong numbers" << endl;
	}
	return 0;
}