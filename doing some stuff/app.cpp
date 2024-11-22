#include <iostream>
using namespace std;
int main()
 {
    int number;
    //ask the user for a number
   cout<<"enter the number: ";
   cin>> number;
    //check if it is a zero
   if (number==0)
   {cout<<"0 is neither even nor odd" <<endl;
   }
    //check if it is even or odd
   else if (number %2==0)
   {
    cout<<number <<" is even. " <<endl;
   }
   else {
    cout<<number <<" is odd. " <<endl;
   }
   return 0;
 }
