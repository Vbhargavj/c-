#include <iostream>

using namespace std;
class grandfather
{
protected:
    int work;

private:
    int pernaldet;

public:
    int noc;
    int getdata()
    {
        return pernaldet;
    }
    void members1()
    {
        cout << "After 2 genaration total member are " << noc << endl;
    }
};
class father : public grandfather
{
    int pride;

public:
    int noc1;
    void members2()
    {
        cout << "After 2 genaration total member are " << noc + noc1 << endl;
    }
};
class me : public father
{
    int de;

public:
    int noc2;
    // int member = noc1 + noc + noc2;
    void members3()
    {
        cout << "After 3 genaration total member are " << noc + noc1 + noc2 << endl;
    }
};

int main()
{
    me m;
    m.noc = 5;
    m.noc1 = 7;
    m.noc2 = 12;
    m.members3();
    m.members2();
    m.members1();
    return 0;
}