#include <iostream>
using namespace std;

int main()
{
    int inttype;
    float floattype;
    double doubletype;
    long longtype;
    char chartype;
    // use sizeof of oparator
    cout << "sizeof inttype " << __SIZEOF_INT__ << endl;
    cout << "sizeof floattype " << __SIZEOF_FLOAT__ << endl;
    cout << "sizeof doubletype " << __SIZEOF_DOUBLE__ << endl;
    cout << "sizeof  longtype " << __SIZEOF_LONG__ << endl;
    cout << "sizeof charttype " << __SIZEOF_WCHAR_T__ << endl;

    return 0;
}