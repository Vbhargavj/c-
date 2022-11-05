#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter number for stored in a " << endl;
    cin >> a;
    cout << "Enter number for stored in b " << endl;
    cin >> b;
    cout << "Enter number for stored in c " << endl;
    cin >> c;
    cout << "Enter number for stored in d " << endl;
    cin >> d;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "maximum value is " << a;
            }
            else
            {
                cout << "maximum value is " << d;
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            cout << "maximum value is " << b;
        }
        else
        {
            cout << "maximum value is " << d;
        }
    }
    else if (c > d)
    {
        cout << "maximum value is " << c;
    }
    else
    {
        cout << "maximum value is " << d;
    }
    return 0;
}