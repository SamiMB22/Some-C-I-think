#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   float A, B, C, X;
   cout<<"enter A then B then C : "<<endl;
   cin>> A>> B>> C;
   X=((-B)+sqrt(pow(B,2)-(4*A*C)))/(2*A);
   cout<<"x equals : "<<X;
   return 0;
}