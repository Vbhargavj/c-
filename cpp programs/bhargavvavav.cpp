#include<iostream>
using namespace std;
  int main(){
  int age;
  cout<<"Tell me your age"<<endl;
  cin>>age;
   
   switch (age)
   {
   case 18:
   cout<<"You are 18"<<endl;
       break;
   case 17:
   cout<<"Your age same as bhargav age"<<endl;
       break;
       case 1:
       cout<<"You are vary small to access this";
       break;
   default:
       break;
   }
   cout<<"You are not to  eligle to for this"<<endl;
  cout<<"This program is written by bhargav";
      return 0;
  }