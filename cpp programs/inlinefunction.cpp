#include<iostream>
using namespace std;


inline int product(int a,int b ){
return a*b;
}

// don't use inline function in static
// int product(int a,int b){
//     static int c=0; 
//     c=c+1;
//     return a*b+c;
// }


int main(){
    int a,b;
 cout<<"Enter the  number";
 cin>>a>>b;

 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;
 cout<<"the product of number is "<<product(a,b)<<endl;

return 0;
}