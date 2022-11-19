#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//  int swap(int a,int b){
//         int temp=a;
//             a=b;
//             b=temp;
//             cout<<a<<b;
//     }

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "The value of a " << x << " and b is " << y << endl;
    swap(&x, &y);
    cout << "The value of a " << x << " and b is " << y << endl;
    return 0;
}