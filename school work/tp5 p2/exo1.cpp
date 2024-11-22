#include <iostream>

using namespace std;
int main()
{
    int A, B;
    char operation;
    cout<<"==================Calculator=================="<<endl;
    cout<<"Enter the first int : "<<endl;
    cin>> A;
    cout<<"Enter the second int : "<<endl;
    cin>> B;
    cout<<"Enter the operation(+ or – or * or /) : "<<endl;
    cin>> operation;
    switch (operation)
    {
    case '+':
        cout<<A<<"+"<<B<<"="<<A+B<<endl;
        break;
    case '-':
        cout<<A<<"-"<<B<<"="<<A-B<<endl;
        break;
    case '*':
        cout<<A<<"*"<<B<<"="<<A*B<<endl;
        break;
    case '/':
        if(B!=0)
        {cout<<A<<"/"<<B<<"="<<A/B<<endl;
        }
        else
        {cout<<"Error: Division by zero is not allowed. . ."<<endl;
        }
        break;
    default:
        cout<<"Error, Invalid operation. . ."<<endl;
        break;
    }
    return 0;
}