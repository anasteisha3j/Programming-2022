//ex.22
#include <iostream>
using namespace std;
int main()
{
	/*
		float mas[20];
		int n;

		n = 20;
		mas[0] = 0;
		mas[1] = 5 / 8.0;
		for (int i = 2; i < n; i++)
		{
			mas[i] = mas[i - 1] / 2 + (mas[i - 2] * 3) / 4;

		}

		for (int i = 0; i < n; i++)
		{
			cout << mas[i] << "\n";
		}*/
	float a[100];
	int n;
	cout << "enter n";
	cin >> n;
	float MinNum = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = (i) / (i + 2) + sin(powl(i, 3) / i + 2);

	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	MinNum = a[1];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			cout << a[i] << " ";
			if (a[i] < MinNum)
			{
				MinNum = a[i];
			}
		}

	}


	cout << "min =" << MinNum;
	return 0;
}

