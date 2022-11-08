#include <iostream>

using namespace std;

class base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};
/*
For a protected member:
                       Public derivation Private Derivation   Protected Derivation
1. Private members     Not Inherited      Not Inherited        Not Inherited
2. Protected members   Protected          Private              Protected
3.Public members       Public             Not Inherited        Protected
*/
class derived : protected base
{
    int q;

public:
    void show()
    {
        cout << q << endl
             << c << endl
             << a << endl;
    }
};
int main()
{
    derived d;
    d.show();
    return 0;
}