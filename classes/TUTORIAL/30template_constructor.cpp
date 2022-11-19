#include <iostream>
#include <string.h>
using namespace std;

template <class T>
class vbj
{
    string name;
    int age;
    T cpi;

public:
    // void getdata();
    void getdata()
    {
        cout << "\nThe name of student is :" << name << endl;
        cout << "The age of student is :" << age << endl;
        cout << "The cpi of student is :" << cpi << endl;
        cout << endl;
    }
    vbj(string name, int age, T cpi)
    {
        this->name = name;
        this->age = age;
        this->cpi = cpi;
        getdata();
    }
};
int main()
{
    vbj<float> v("bhargav", 19, 8.29);
    vbj<int> j("jeet", 17, 8);

    return 0;
}