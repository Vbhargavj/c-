#include <iostream>

using namespace std;

class bhargav
{
    int v, b;

public:
    bhargav(int a, int c) : v(a), b(c)
    {
        cout << "New method of intiliszing value" << endl;
        cout << "The value of v is : " << v << endl;
        cout << "The value of b is : " << b << endl;
    }
} ;int main()
{
    bhargav b1(34,4);

    return 0;
}