#include <iostream>
using namespace std;
int main()
{
    int n, nbr[n];
    cout<<"how many numbers u wanna enter : "<<endl;
    cin>>n;
    for (int i = 0 ; i < n; i++)
    {
        cout<<"enter the number "<<i+1<<" : ";
        cin>>nbr[i];
    }
    
    
    return 0;
}