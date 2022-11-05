#include <iostream>
using namespace std;

class employee
{
public:
    int sallary, id;

    void getdata()
    {
        cout << "Etner the number of employye";
        cin >> id;
        sallary = 1212;
    }
    void givedata()
    {
        cout << "The employye is " << id << "sallary is " << sallary << endl;
    }
};

int main()
{
    employee emp[4];
    for (int i = 0; i < 4; i++)
    {
        emp[i].getdata();
        emp[i].givedata();
    }

    return 0;
}