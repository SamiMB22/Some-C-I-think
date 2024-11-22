#include <iostream>
using namespace std;
int main()
{
   double A, B, C, D, Result;
   cout<<"enter A then B then C then D : "<<endl;
   cin>> A>> B>> C>> D;
   cout<<"calculating...."<<endl;
   Result = ((A*B)-C)/(C+(5.02*D));
   cout<<" the result is : "<<Result<<endl;
   return 0;
}