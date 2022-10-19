#include <iostream>
using namespace std;
int main()
{
	/*1
	double a[100]; 
	int n;
	cout << "enter n " << endl;
	cin >> n;
	for (int i = 0; i <n; i++)
	{
		cout << "enter i el. " << i << " "<<endl;
		cin >> a[i];
	}
	double s = a[0];
	double b[100];
	for (int k = 0; k < n; k++)
	{
		b[k] = a[k] / (1 + s * s);
		s = s + a[k + 1];
		cout << " b[n]= " << b[k] << endl;
	}*/

	/*2
	cout << "enter k " << endl;
    int k;
	cin >> k;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0) 
		{
			cout << k << endl;
		}

	}*/

	/*3
	double a[100];
	int m;
	cout << "enter m " << endl;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "enter i el" << i << " ";
		cin >> a[i];
	}
	bool s = true;
	for (int i = 0; i < m-1; i++)
	{
		if (a[i] < a[i+1])
		{
			cout << "not down";
			break;s = false;
		}
	}
	if (s == true) {
		cout << "down";
	}*/

	/*int size;
	int a[100];
	cout << "enter size " << endl;
	cin >> size;

	for (int i = 0; i < n; i++)
	{
		cout << "input x" << endl;
		cin >> a[i];
	}
	int min[] = { a[0],0 };
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min[0]) {
			min[0] = a[i];
		}
	}*/

	int size;
	int a[100];
	cout << "enter size " << endl;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "input x" << endl;
		cin >> a[i];
	}
	int min = a[0];
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (a[i] < min) {
			min = a[i];
			index = i;
		}
	}
	cout << "min num " << min << " index= " << index;


	return 0;
}