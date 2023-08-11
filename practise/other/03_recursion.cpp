#include <iostream>

using namespace std;

int add(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + add(n - 1);
    }
}

int main()
{
    int n, sum = 0;
    cout << "Enter the number";
    cin >> n;
    sum = add(n);
    cout << sum;
    return 0;
}
