#include <iostream>

using namespace std;
class bankdp
{
private:
    int deposit;
    float returnval;
    float inrest;
    int year;

public:
    // default constuctor
    bankdp();
    bankdp(int, int, int);
    bankdp(int, int, float);
    show()
;};
bankdp::bankdp()
{
}
bankdp::bankdp(int d, int y, float i)
{
    deposit = d;
    inrest = i;
    year = y;
    returnval = deposit;

    for (int i = 0; i < year; i++)
    {
        returnval = returnval * (1 + i);
    }
}
bankdp::bankdp(int d, int y, int i)
{
    deposit = d;
    inrest = i;
    year = y;
    inrest = (float)inrest / 100;
    returnval = deposit;

    for (int i = 0; i < year; i++)
    {
        returnval = returnval * (1 + inrest);
    }
}
bankdp::show()
{
    cout << "If you give " << deposit << "rupees to bank at " << inrest << "for " << year << "year return value is " << returnval << endl;
}

int main()
{
    bankdp b1(100, 1, 45);
    b1.show();
    
    bankdp b2(100, 33, 2);
    b2.show();

    return 0;
}