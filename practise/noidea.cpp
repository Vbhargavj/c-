#include <iostream>
using namespace std;
// maximum value of 4numbers
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << "maximum value of is" << a;
            }
            else
            {
                cout << "maximum value of is" << d;
            }
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            if (b > d)
            {
                cout << "maximum value is" << b;
            }
            else
            {
                cout << "maximum value is" << d;
            }
        }
    }
    else if (c > a)
    {

        if (c > d)
        {
            cout << "max is" << c;
        }
    }
    else
    {
        cout << "maximum value is" << d;
    }

    return 0;
}