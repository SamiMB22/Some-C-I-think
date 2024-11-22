#include <iostream>
using namespace std;
 int main()
 {
    float X;
    cout<<"enter the number: ";
    cin>> X;
    if (X==0)
    {
        cout<<"the number x is a zero.";
    }else if (X<0)
    {
        cout<<"the number x is negative.";
    }else //(X>0)
    {
        cout<<"the number x is positive.";
    }
    getchar();
    return 0;
 }