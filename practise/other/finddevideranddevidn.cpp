#include<iostream>
using namespace std;

int main(){
int divisor,devident,quotient,reminder;

 cout<<"Enter the divident";
 cin>>devident;
 cout<<"Enter the devisor ";
 cin>>divisor;
 quotient=devident/divisor;
 reminder=devident%divisor;
 cout<<"quotient"<<quotient<<endl;
 cout<<"reminder"<<reminder;
return 0;
}