#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int Day, Month;
	cout << "Enter Day" << endl;
	cin >> Day; 
	cout << "Enter Month" << endl;
	cin >> Month;
	switch (Month)
	{
	case 1:
		
		if (Day < 20)
			cout << "Capricorn" << endl;
		else cout << "Aquarius" << endl;
		break;
	case 2:
		
		if (Day < 20)
			cout << "Aquarius" << endl;
		else cout << "Pisces" << endl;
		break;
	case 3:
		
		if (Day < 20)
			cout << "Pisces" << endl;
		else cout << "Aries" << endl;
		break;
	case 4:
		if (Day < 20)
			cout << "Aries" << endl;
		else cout << "Taurus" << endl;
		break;
	case 5:
		if (Day < 21)
			cout << "Taurus" << endl;
		else cout << "Gemini" << endl;
	case 6:
		
		if (Day < 21)
			cout << "Gemini" << endl;
		else cout << "Cancer" << endl;
		break;
	case 7:
		
		if (Day < 23)
			cout << "Cancer" << endl;
		else cout << "Lion" << endl;
		break;
	case 8:
		
		if (Day < 23)
			cout << "Lion" << endl;
		else cout << "Virgo" << endl;
		break;
	case 9:
		
		if (Day < 23)
			cout << "Virgo" << endl;
		else cout << "Libra" << endl;
		break;
	case 10:
		
		if (Day < 23)
			cout << "Libra" << endl;
		else cout << "Scorpio" << endl;
		break;
	case 11:
		
		if (Day < 22)
			cout << "Scorpio" << endl;
		else cout << "Sagittarius" << endl;
		break;
	case 12:
		
		if (Day < 22)
			cout << "Sagittarius" << endl;
		else cout << "Capricorn" << endl;
		break;
	}
	system("pause");
	return 0;
}