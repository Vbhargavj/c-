#include<iostream>
using namespace std;

int main(){
  int a=3;
  int* b = &a;
  cout<<"the address of a is "<<&a<<endl;
  cout<<"The address of a is "<<b<<endl;
  cout<<"The value of at address b is"<<*b<<endl; 
return 0;
}