#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int a;
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "The FIBONACCI series of " << a << " is " << fibo(a);

    return 0;
}