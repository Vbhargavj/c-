#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the number";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "maximum values of " << a;
        }
        else
        {
            cout << "maximum values of " << c;
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            cout << "maximum values of " << b;
        }
        else
        {
            cout << "maximum values of " << c;
        }
    }
    else
    {
        cout << "maximum values of " << c;
    }

    return 0;
}