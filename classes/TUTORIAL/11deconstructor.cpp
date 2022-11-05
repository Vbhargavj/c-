#include <iostream>

using namespace std;

class student
{
private:
    int rnum;
    float cpi;
    int sdata;

public:
    student(int, float, int);
    // declare here deconstructor
    ~student();
    void show()
    {
        cout << "Student rollnumber :- " << rnum << endl
             << "Student cpi :- " << cpi << endl
             << "Student othe data :- " << sdata << endl;
    }
};

student::student(int roll, float n, int s)
{
    rnum = roll;
    cpi = n;
    sdata = s;
}

// here below function is called deconstructor
// deconstructure is use free memory of object

student::~student()
{
    cout << "Here object is free from memory" << endl;
}

int main()
{
    student s(1, 9.9, 4);
    s.show();
    return 0;
}