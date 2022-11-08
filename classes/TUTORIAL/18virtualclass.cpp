#include <iostream>

using namespace std;

class student
{
protected:
    int roll;

public:
    void setdata(int a)
    {
        roll = a;
    }
    void getdata()
    {
        cout << "The roll number of student is " << roll << endl;
    }
};

class extheory : virtual public student
{
protected:
    float phy;
    float che;
    float math;

public:
    void setdata1(float p, float c, float m)
    {
        phy = p;
        che = c;
        math = m;
    }
    void getdata1()
    {
        cout << "The theory mark of physics is " << phy << endl;
        cout << "The theory mark of chemistry is " << che << endl;
        cout << "The theory mark of math is " << math << endl;
    }
};
class practical : virtual public student
{
protected:
    float ph, ch;

public:
    void setdata2(float pp, float pc)
    {
        ph = pp;
        ch = pc;
    }
    void getdata2()
    {
        cout << "The mark of practical physics is " << ph;
        cout << "The mark of practical chemistry is " << ch;
    }
};
class result : public practical, public extheory
{
public:
    void res()
    {
        cout << endl
             << "<------ Mark in Theory ------>" << endl;
        cout << "Mark obtain in Physics : " << phy << endl;
        cout << "\tMark obtain in Chemistry : " << che << endl;
        cout << "\tMark obtain in Maths : " << math << endl;
        cout << "\t\tTotal mark obatain in theory is " << phy + che + math << endl
             << endl;
    }
};
int main()
{
    result r;
    r.setdata(57);
    r.setdata1(99, 95, 100);
    r.setdata2(47, 48);
    // r.getdata();
    // r.getdata1();
    // r.getdata2();
    r.res();

    return 0;
}