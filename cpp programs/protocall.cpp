#include<iostream>
using namespace std;
int sum (int a, int b){
    int  c = a+b;
    return c;
}


int main(){
  int num1, num2;
  cout<<"Enter the first number";
  cin>>num1;
  cout<<"enter the second number";
  cin>>num2;
  cout<<"The sum of  num1 and num2 is  "<<sum(num1,num2);
return 0;
}