#include <iostream>

using namespace std;
class complex;

class calculater
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int rsum(complex, complex);
};

class complex
{
private:
    int a, b;

public:
    void set_variable(int a1, int a2)
    {
        a = a1;
        b = a2;
    }
    friend calculater;
    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculater::rsum(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int main()
{
    complex a, b;
    a.set_variable(3, 8);
    a.print();

    b.set_variable(48, 2);
    b.print();

    calculater c;
    int r = c.rsum(a, b);
    cout << "the sum of complex number is " << r << endl;
    return 0;
}