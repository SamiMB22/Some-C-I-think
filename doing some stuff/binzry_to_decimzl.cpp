#include<iostream>
using namespace std;
int main()
{
    int nbr,s,binary, decimal = 0,n;
    cout<<"enter a binary number: ";
    cin>>binary;
    s = 1;
    while (binary != 0)
    {
        nbr = binary % 10; 
        n = nbr * s;
        decimal += n;
        binary /= 10;
        s *= 2;
    }
    cout<<"the decimal number is: "<<decimal;
    return 0;
}