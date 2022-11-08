#include <iostream>

using namespace std;

class simple1
{
public:
    void greet()
    {
        cout << "Hello Welcome to bhargav world" << endl;
    }
};

class simple2
{
public:
    void greet()
    {
        cout << "Hello this world crated by bhargav" << endl;
    }
};

class derived : public simple1, public simple2
{
public:
    // here greet function is define in both class simple1 and simple2 so compiler confuce to which function use
    // if i create greet function in derived class compiler use this function
    void greet() 
    {
        simple1::greet();
    }
};
int main()
{
    derived d;
    d.greet();
    return 0;
}