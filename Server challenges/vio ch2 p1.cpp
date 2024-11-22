#include <iostream>
using namespace std;
int main()
{
    int X, i;
    cout<< "Enter a natural number : ";
    cin>> X;
    if (X < 0)
    {
        cout<<"The number must be positive."<<endl;
        return 0;
    }
    i = 1;
    while (i*i <= X)
    {
        if (i*i == X)
        {
            cout<<X<<" is a perfect square. Its square root is "<<i<<"."<< endl;
            return 0;
        }
        i=i+1;
    }
    cout<< X <<" is not a perfect square."<< endl;
    return 0;
}
