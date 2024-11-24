#include <iostream>
#include <array>
using namespace std;
int main()
{
    int N, i;
    int number[N] ;

    cout<< "Enter a natural number : ";
    cin>> N;
    cin>> number[N];
    if (N < 0)
    {
        cout<<"The number must be positive."<<endl;
        return 0;
    }
    i = 1;
    while (i*i <= number[N])
    {
        if (i*i == number[N])
        {
            cout<<number[N]<<" is a perfect square. Its square root is "<<i<<"."<< endl;
            return 0;
        }
        i=i+1;
    }
    cout<< number[N] <<" is not a perfect square."<< endl;
    return 0;
}
