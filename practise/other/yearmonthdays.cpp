#include <iostream>
using namespace std;

int main()
{
    float days;
    cout << "Enter the days count for month and year ";
    cin >> days;
    cout << "Years " << days / 365 << endl;
    cout << "month " << days / 30 << endl;
    cout << "weeks " << days / 7 << endl;
    
    return 0;
}