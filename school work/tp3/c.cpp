#include <iostream>
using namespace std;
int main()
{
    float x, y, z;
    cout<<"enter x : ";
    cin>> x;
    cout<<"enter y : ";
    cin>> y;
    cout<<"enter z : ";
    cin>> z;
    cout<< ((y<x) && (x<z))<<endl;
   return 0;
}