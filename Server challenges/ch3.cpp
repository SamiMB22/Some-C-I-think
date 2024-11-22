#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout<<"Enter three numbers(integers) : ";
    cin>> A>>B>>C;

    if (A>0 && B%2 == 0)
    {
        cout<<"The Mysterious Number is : "<<A+B;
    }
    else if (C<0 && A>5)
    {
        cout<<"The Mysterious Number is : "<<A*C;
    }
    else if (A == 0)
    {
        cout<<"The Mysterious Number is : "<<abs(B);
    }
    else
    {
        cout<<"The Mysterious Number is : "<<B-C;
    }
    return 0;
}