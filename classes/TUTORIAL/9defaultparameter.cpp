#include <iostream>

using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int, int);
    void print()
    {
        cout << "These data are " << data1 << " and " << data2 << endl;
    }
};

simple::simple(int a = 9, int b = 8)
{
    data1 = a;
    data2 = b;
}

int main()
{
    simple s1(3,5);
    s1.print();

    return 0;
}