#include <iostream>

using namespace std;

class vbj
{
    int a, b;

public:
    void setdata(int v, int j)
    {
        a = v;
        b = j;
    }
    void getdata()
    {
        cout << "The value of a is " << a << " and b is " << b << endl;
    }
};
int main()
{
    vbj k, *ptr1, *ptr2;
    ptr1 = &k;
    ptr2 = new vbj;

    (*ptr2).setdata(0, 1);
    (*ptr2).getdata();

    ptr1->setdata(2, 3);
    ptr1->getdata();

    k.setdata(4, 5);
    k.getdata();

    return 0;
}