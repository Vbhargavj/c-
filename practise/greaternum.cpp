#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the numbers";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
        cout << b << " is less than " << a << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
        cout << a << " is less than " << b << endl;
    }
    return 0;
}