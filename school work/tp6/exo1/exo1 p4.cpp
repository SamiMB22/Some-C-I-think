#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, prime, i;
    cout << "Prime numbers less than 100 are:" << endl;
    for ( num = 2; num < 100; num++)
    {
        prime = 1;

        for ( i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}