#include <iostream>

using namespace std;

class vbj
{
public:
    virtual void greet() = 0;
};

class bhargav : public vbj
{
public:
    void greet()
    {
        cout << "Hello bhargav calling" << endl;
        cout << "Hello my name is bhargav" << endl;
    }
};

class jeet : public vbj
{
public:
    void greet()
    {
        cout << "Hello jeet calling" << endl;
        cout << "Hello my name is jeet" << endl;
    }
};

int main()
{
    vbj *ptr1, *ptr2;

    bhargav b;
    jeet j;

    ptr1 = &b;
    ptr2 = &j;

    ptr1->greet();
    ptr2->greet();

    return 0;
}