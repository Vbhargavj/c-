#include <iostream>
using namespace std;

class bhargav
{

public:
    int a, b;
    // int count=0; every objact count value start with 0
    int count = 0;

    void givedata()
    {
        cout << "Enter the number";
        cin >> a;
        count++;
    }
    void throughdata()
    {

        cout << "The number is" << a << endl;
        cout << count;
    }
    void ganva()
    {

        cout << "You are waiting with " << count;
    }
};

int main()
{

    bhargav vbj, pb, mk;

    vbj.givedata();
    vbj.throughdata();
    vbj.ganva();

    pb.givedata();
    pb.throughdata();
    pb.ganva();

    mk.givedata();
    mk.throughdata();
    mk.ganva();

    return 0;
}