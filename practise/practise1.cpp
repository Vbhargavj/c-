#include <iostream>
using namespace std;

  inline int prod(int a, int b)
    {
        return  a * b;
    }

int main()
{
    int x,y;
    cout<<"Enter the first value "<<endl;
    cin>>x;
    cout<<"Enter the second value "<<endl;
    cin>>y;


    cout<<"your values is "<<prod(x,y)<<endl;
    cout<<"your values is "<<prod(x,y)<<endl;
    cout<<"your values is "<<prod(x,y)<<endl;
    

    return 0;
}