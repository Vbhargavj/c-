#include <iostream>

using namespace std;
class simple
{
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void getData()
    {
        cout << "The value of a is " << a << " and b is " << b << endl;
    }
};
int main()
{
    simple s;
    s.setData(2, 3);
    s.getData();

    return 0;
}