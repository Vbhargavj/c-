#include <iostream>
using namespace std;

class complex
{
    int a, b;
    // this line allow to access all data from complex to function
    friend complex sumofcomplex(complex o, complex p);

public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sumofcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex o1, o2, sum;
    o1.setnumber(4, 5);
    o1.print();

    o2.setnumber(1, 2);
    o2.print();

    sum = sumofcomplex(o1, o2);
    sum.print();
    
    return 0;
}