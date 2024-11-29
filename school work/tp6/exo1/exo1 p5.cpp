#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, prime, i, s; // this is a code to display the first 100 prime numbers
    cout << "First 100 prime numbers are:" << endl;
    s = 0;
    for (num = 1; s < 100; num++)
    {
        prime = 1;
        for (i = 2; i <= sqrt(num); i++)
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
            s = s + 1;
        }
    }
    cout << endl;
    return 0;
}
