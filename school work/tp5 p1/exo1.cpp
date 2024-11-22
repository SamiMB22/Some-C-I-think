#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter three integers (A, B, C): ";
    cin >> A >> B >> C;
    if ((A>B)&&(A>C))
    {
        if (C>B)
        {
            cout<<A<<">"<<C<<">"<<B;
        }else{
            cout<<A<<">"<<B<<">"<<C;
        }
        
    }
    if ((B>A)&&(B>C))
    {
        if (C>A)
        {
            cout<<B<<">"<<C<<">"<<A;
        }else{
            cout<<B<<">"<<A<<">"<<C;
        }
        
    }
    if ((C>B)&&(C>A))
    {
        if (A>B)
        {
            cout<<C<<">"<<A<<">"<<B;
        }else{
            cout<<C<<">"<<B<<">"<<A;
        }
        
    }   

    
    return 0;
}
