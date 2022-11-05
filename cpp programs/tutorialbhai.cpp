#include<iostream>
using namespace std;

 int main(){

    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    if(18<age){
        cout<<"you have already chutani card"<<endl;
    }
     else if(age==18) {
        cout<<"you have to apply chutani card:"<<endl;
    }
     else {
         cout<<"you can not apply chutani card "<<endl;
     }
        cout<<"This program is created by BHARGAV";
     return 0;
 }