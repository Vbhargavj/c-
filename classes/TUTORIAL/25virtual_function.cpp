#include <iostream>

using namespace std;

class vbj
{
public:
    virtual void greet()
    {
        cout << "Hello my name is the bhargav" << endl;
    }
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

int main()
{
    vbj *ptr;
    bhargav b;
    ptr = &b;
    ptr->greet();

    return 0;
}