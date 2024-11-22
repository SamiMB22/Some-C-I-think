#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, f;
    cout<<"Enter the value of X : ";
    cin>> x;
    f=3*pow(x,3)+2*pow(x,2)+1;
    cout<<"F("<<x<<")=3*"<<x<<"*"<<x<<"*"<<x<<"+2*"<<x<<"*"<<x<<"+1="<<f<<endl;
    return 0;
}