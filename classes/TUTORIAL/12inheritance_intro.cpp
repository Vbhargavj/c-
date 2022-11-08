#include <iostream>

using namespace std;

class employee
{
public:
    int id;
    int scode;
    employee();
    employee(int i, int s);
    ~employee();
};

// here this is conctructor
employee::employee(){};

// here this is conctructor
employee::employee(int i, int s)
{
    id = i;
    scode = s;
}

// here this is deconctructor
employee::~employee()
{
}

// here inheritance example
class programer : employee
{
public:
    int lcode = 9;
    // here this is conctructor
    programer(int ed, int sc)
    {
        id = ed;
        scode = sc;
    }
    void show()
    {
        cout << "The id of empleyee is " << id << endl
             << "the subjact of employee is " << scode << endl
             << "The programer use langauge code is " << lcode;
    }
};

int main()
{
    employee e(2, 3);
    programer p(3, 4);
    p.show();
    return 0;
}