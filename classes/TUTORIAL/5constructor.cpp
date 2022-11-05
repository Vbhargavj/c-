#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex();
    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(){
    a=30;
    b=20;
}
int main()
{
    complex o;
    o.print();
    return 0;
}