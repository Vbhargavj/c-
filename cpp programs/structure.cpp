#include <iostream>
using namespace std;
// typedef use to shotcut "struct employee"//
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;

}; // use any word to before;//
int main()
{

    struct employee bhargav; // you can  replace struct employee to word//
    bhargav.eId = 1;
    bhargav.favChar = 'p';
    bhargav.salary = 21212;
    cout << "the value is: " << bhargav.eId << endl;

    cout << "the value is: " << bhargav.favChar << endl;
    cout << "the value is: " << bhargav.salary << endl;
    return 0;
}