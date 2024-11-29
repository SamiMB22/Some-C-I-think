#include <SFML/Graphics.hpp>
#include <iostream>
#include <thread>
#include <cmath>

using namespace std;
int main()
{
    int A, B, C;
    cout<<"===WHO IS THE SMALLEST NUMBER==="<<endl;
    cout<<"enter A : ";
    cin>> A;
    cout<<"enter B : ";
    cin>> B;
    cout<<"enter C : ";
    cin>> C;
    if (A > B)
    {
        if (B < C)
        {
            cout<<"B the smallest";
        }else //(C < B)
        {
            cout<<"C the smallest";
        }
        
    }
    else //(B > A)
    {
        if (A > C)
        {
            cout<<"C the smallest";
        }else //(C > A)
        {
            cout<<"A the smallest";
        }
        
    }
    getchar();
    return 0;
    
}