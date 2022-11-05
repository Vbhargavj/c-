#include <iostream>
using namespace std;

int main()
{

   float num1;
   float num2;
   char o;
   cout << "Enter the first valuess " << endl;
   cin >> num1;
   cout << "Enter the second value" << endl;
   cin >> num2;
   cout << "Enter the operation" << endl;
   cin >> o;
   switch (o)
   {
   case '+':
      cout << "the addition is " << num1 + num2 << endl;
      break;
   case '-':
      cout << "The substraction is " << num1 - num2 << endl;
      break;
   case '*':
      cout << "The multipication is " << num1 * num2 << endl;
      break;
   case '/':
      cout << "The devide is " << num1 / num2 << endl;
      break;

   default:
      cout << "enter valid symbol" << endl;
   }
   cout << "this is made by bhargav";
   return 0;
}