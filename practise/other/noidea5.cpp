#include <iostream>
using namespace std;
class worker
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "the value of a is " << a;
        cout << "the value of b is " << b;
        cout << "the value of c is " << c;
        cout << "the value of d is " << d;
        cout << "the value of e is " << e;
    }
};
int main()
{
    worker bhargav;
    bhargav.setdata(3, 4, 5);
    bhargav.d = 3;
    bhargav.e = 2;

    return 0;
}