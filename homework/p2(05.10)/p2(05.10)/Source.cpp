//15. «а введеним номером м≥с€ц€ року, вивести його назву
#include <iostream>
using namespace std;
int main()
    {
        size_t month;
        cout << "Enter the number of month ";
        cin >> month;
        switch (month)
        {
        case 1:
            cout << "January";
            break;
        case 2: 
            cout << "Februry";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        }
        cin.get();
        return 0;

}