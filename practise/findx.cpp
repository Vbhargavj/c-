#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the constant of equation given here: " << endl;
    cout << "ax^2+bx+c" << endl;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;
    for (int i = 1; i < 10; i++)
    {
        {
            if (a * i * i + b * i + c == 0)
            {
                cout << i;
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}