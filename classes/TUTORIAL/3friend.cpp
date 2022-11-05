#include <iostream>

using namespace std;
// forward declaration
class complex;
// here define calculater class
class calculater
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    // here only define function
    int rsum(complex, complex);
    int isum(complex, complex);
};
// define class of complex and it's data
class complex
{
    int a, b;

public:
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }
    // make friend function there for access all data from complex class
    friend int calculater::rsum(complex, complex);
    friend int calculater::isum(complex, complex);

    void print()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};

// above define function is complete here this function make sum of real part
int calculater::rsum(complex o1, complex o2)
{
    return o1.a + o2.a;
}

// above define function is complete here this function make sum of imaginary part
int calculater::isum(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    complex c1, c2;
    c1.setnumber(3, 1);
    c1.print();

    c2.setnumber(6, 5);
    c2.print();

    calculater s;
    int sum = s.rsum(c1, c2);
    int sum2 = s.isum(c1, c2);

    cout << "the sum of real element is " << sum;
    cout << "\nthe sum of real element is " << sum2 << "i\n";

    return 0;
}