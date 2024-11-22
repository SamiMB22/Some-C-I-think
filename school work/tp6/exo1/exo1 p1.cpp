#include <iostream>
using namespace std;
int main()
{
/*
1) read a positive integer N. and display the number of digits that it 
compound.
*/
    int nbr, n;
        cout<<"Enter a positive number : ";
        cin>>n;
    if (n>0)
    {
        nbr==0;
        do
        {
            n=n/10;
            nbr=nbr+1;
        } while (n!=0);
        cout<<"there is "<<nbr<<" digits"<<endl;
    }
    else
    {
        cout<<"pls enter a positive number :)";
    }
    return 0;

}