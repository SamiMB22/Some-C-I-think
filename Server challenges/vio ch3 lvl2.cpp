#include <iostream> //fizzbuzz
using namespace std;
int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            cout << "fizzbuzz,";
        }
        else if (i % 5 == 0)
        {
            cout << "buzz,";
        }
        else if (i % 3 == 0)
        {
            cout << "fizz,";
        }
        else
        {
            cout << i << ",";
        }
    }
    return 0;
}