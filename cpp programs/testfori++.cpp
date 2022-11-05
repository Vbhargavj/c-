#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number for you want table ";
    cin >> n;

    for (int i = 1; i < 11; i++)
    {
        cout << n << "x" << i << '=' << i * n << endl;
    }

    return 0;
}