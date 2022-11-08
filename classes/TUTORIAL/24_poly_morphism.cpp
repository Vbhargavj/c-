#include <iostream>

using namespace std;
class base1
{
public:
    int a;
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
    void display()
    {
        cout << " hii this is base function" << endl;
    }
};
class derived : public base1
{
public:
    void display()
    {
        cout << " hii this is derived function" << endl;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    base1 *ptb,b2;
    // base1 b1;
    // derived *ptd;
    derived d1,ptr;
    ptb = &d1;
  
    ptb->setdata(4);
    ptb->getdata();
    ptb->display();

    // ptr=&b2; -->show an error
    // ptr.

    return 0;
}