#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a, b, c, X1, X2, X, D;
    cout<<"Equation Solver"<<endl;
    cout<<"a(X^2)+bX+c=0"<<endl;
        cout<<"enter a : ";
        cin>> a;
        cout<<"enter b : ";
        cin>> b;
        cout<<"enter c : ";
        cin>> c;
    if (a!=0)
    {  
        cout<<"Resolution of a second degree equation : "<<endl;
        cout<<"the equation is :  ";
        cout<<a<<"*(X^2)+("<<b<<"*X)+("<<c<<")=0"<<endl;
        D=pow(b,2)-(4*a*c);
        if (D>0)
        {
        X1=(-b-sqrt(D)/(2*a));
        X2=(-b+sqrt(D)/(2*a));
        cout<<"the equation has 2 solutions X1="<<X1<<" X2="<<X2<<endl;
        }
        else
        {
            cout<<"error"<<endl;
        }
        if (D==0)
        {
            cout<<"Resolution of a second degree equation : "<<endl;
        cout<<"the equation is :  ";
        cout<<a<<"*(X^2)+("<<b<<"*X)+("<<c<<")=0"<<endl;
            X = (-b) / 2 *a;
            cout<<"the equation has 1 solution X="<<X<<endl;
        }
       if(b != 0 && c == 0 )
       {
        cout<<"Resolution of a second degree equation : "<<endl;
        cout<<"the equation is :  ";
        cout<<a<<"*(X^2)+("<<b<<"*X)+("<<c<<")=0"<<endl;
        X1=0;
        X2=(-b)/a;
        cout<<"the equation has 2 solutions X1="<<X1<<" X2="<<X2<<endl;
       }
       
    }
    else // (a=0)
    {
        if(b!=0)
        {
        cout<<"Resolution of a first degree equation : "<<endl;
        cout<<"the equation is :  ";
        cout<<a<<"*(X^2)+("<<b<<"*X)+("<<c<<")=0"<<endl;
        X=(-c)/b;
        cout<<"the equation has 1 solution X="<<X;
        }
        else{
           if(c==0){
            cout<<"true"<<endl;
           } 
           else{
            cout<<"error"<<endl;
           }
        }

        
    }
return 0;
}