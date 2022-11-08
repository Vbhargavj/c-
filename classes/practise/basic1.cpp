#include <iostream>
using namespace std;

class bhargav
{

private:
    int a, d, c;

public:
    int b, p;

    void scan()
    {
        cout << "Enter the number";
        cin >> a;
    }
    void print()
    {
        cout << "The number is ";
        cout << a;
    }
};

int main()
{

    int a;
    bhargav vbj;
    vbj.scan();
    vbj.print();

    return 0;
}