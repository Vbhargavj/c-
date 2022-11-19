#include <iostream>

using namespace std;

int main()
{
    int Day, Month, Year;

    // for birthdate
    cout << "Enter today date" << endl;
    cout << "Day" << endl;
    cin >> Day;
    cout << "Month" << endl;
    cin >> Month;
    cout << "Year" << endl;
    cin >> Year;

    // for today date
    int day, month, year;
    cout << "Enter your birthdate" << endl;
    cout << "day" << endl;
    cin >> day;
    cout << "month" << endl;
    cin >> month;
    cout << "year" << endl;
    cin >> year;

    // for age count
    if (Day >> day)
    {
        if (Month >> month)
        {
            // if Day>day,Month>month,Year>year
            if (Year >> year)
            {
                cout << Day + 30 - day << endl;
                cout << Month - month + 10 << endl;
                cout << Year - year - 1 << endl;
            }
            // if Day>day,Month>month,Year<year
            else
            {
                cout << "YOU are so genius!!" << endl;
                cout << "go to your school and complete your primery study";
            }
        }
        else
        {
            cout << Day - day << endl;
            cout << Month - month + 10 << endl;
            cout << Year - year - 1 << endl;
        }
    }
    else
    {
        cout << day - Day + 30 << endl;
        cout << Month - month + 10 << endl;
        cout << Year - year - 1 << endl;
    }
    int hour1, hour2, hour3, hours;
    hour1 = (Year - year - 1) * 365 * 24;
    hour2 = (Month - month) * 30 * 24;
    hour3 = (Day - day) * 24;
    hours = hour1 + hour2 + hour3;
    cout << "hours:" << hours;

    return 0;
}