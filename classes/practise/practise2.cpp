#include <iostream>
using namespace std;

class good
{
    // int a, b;

public:
    int id, y;

    void getdata()
    {
        cout << "Enter the values";
        cin >> id;
    }
    void setdata()
    {
        cout << "The values is " << id;
    }
};
int main()
{
    good bhargav;
    bhargav.getdata();
    bhargav.setdata();

    return 0;
}