#include <iostream>
using namespace std;
// union money
// {
//     // 43 kb
//     /* data */
//     int rice;
//     char car;
//     float pounds;
// };
struct dj
{
    int cars;
    float sallary;
    char fname;
    /* data */
};


int main()
{
    // union money M1;
    // M1.rice = 43;
    // M1.car = 'a';
    // M1.pounds = 23.23;
    // cout << M1.pounds;
     struct dj bhargav;
    bhargav.cars=300;
    cout<<bhargav.cars;
    
    return 0;
}