#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter number for table " << endl;
    cin >> n;
    while (i <= 10)
    {
        cout << i * n << endl;
        i++;
    }
    return 0;
}