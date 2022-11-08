#include <iostream>

using namespace std;

class base1
{
    int a, b;

public:
    base1(int p=0, int q=1)
    {
        a = p;
        b = q;
        cout << "Now base1 calling" << endl;
    }
    void getdata1()
    {
        cout << "The data are " << a << " and " << b << endl;
    }
};

class base2
{
    int c, d;

public:
    base2(int r, int s)
    {
        c = r;
        d = s;
        cout << "Now base2 calling " << endl;
    }
    void getdata2()
    {
        cout << "The data are " << c << " and " << d << endl;
    }
};
// Here this derived class first parent is base 2 therefore run constructor of first parent class
// Here this derived class second parent is base 1 therefore run constructor of second parent class
// when you write code like virtual execute first execute
class derived : public base2, virtual public base1
{
    int e, f;

public:
    // here  derived(int w, int x, int y, int z, int v, int t) :  base2(y, z),base1(w, x) if changedlike this
    //  derived(int w, int x, int y, int z, int v, int t) :  base1(w, x),base2(y, z) no will change in execute

    derived(int w, int x, int y, int z, int v, int t) : base2(y, z), base1(w, x)
    {
        e = v;
        f = t;
    }
};
int main()
{
    derived d(2, 3, 4, 5, 6, 7);
    d.getdata1();
    d.getdata2();

    return 0;
}