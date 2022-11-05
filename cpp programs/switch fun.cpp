#include<iostream>
using namespace std;
  int main(){
  int age;
  cout<<"tell me your age"<<endl;
  cin>>age;
   
   switch (age)
   {
   case 18:
   cout<<"you are 18"<<endl;
       break;
   case 17:
   cout<<"your age same as bhargav age"<<endl;
       break;
       case 1:
       cout<<"you are vary small to access this";
       break;
   default:
       break;
   }
  cout<<"this program is written by bhargav";
      return 0;
  }