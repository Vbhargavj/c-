#include <iostream>

using namespace std;
class simple
{
    int a, b;

public:
    // simple &  setData(int a, int b)
    simple *setData(int a, int b)
    {
        this->a = a;
        this->b = b;
        // return *this;
        return this;
    }
    void getData()
    {
        cout << "The value of a is " << a << " and b is " << b << endl;
    }
};
int main()
{
    simple s;
    // s.setData(2, 3).getData();
    s.setData(2, 3)->getData();

    return 0;
}