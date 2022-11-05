#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void getdata()
    {
        cout << "Enter the ID of employye";
        cin >> id;
        count++;
    }
    void setdata()
    {
        cout << "Employee id is " << id << endl;
    }
    static void counter()
    {
        cout << "Number of Employe are " << count << endl;
    }
};

int employee::count;

int main()
{
    employee emp[4];
    for (int i = 0; i < 4; i++)
    {
        emp[i].getdata();
        cout << "\t";
        emp[i].setdata();
        cout << "\t\t";
        emp[i].counter();
        cout << "\n";
    }

    return 0;
}