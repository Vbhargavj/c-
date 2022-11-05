#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "this number is prime";
    }
    else
    {
        cout << "this nuymber is non prime";
    }

    return 0;
}