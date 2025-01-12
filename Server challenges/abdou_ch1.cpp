#include <iostream>
using namespace std;
int N, n;
string Ro;
char Num[100];
int main()
{
    cout << "Please enter the Roman numeral: ";
    cin >> Ro;
    for (size_t i = 0; i < Ro.size(); i++)
    {
        Num[i] = Ro[i];
    }
    Num[Ro.size()] = '\0';
    n = 0;
    for (N = 0; N < Ro.size(); N++)
    {
        switch (Num[N])
        {
        case 'I':
            n += 1;
            break;
        case 'V':
            n += 5;
            if (Num[N - 1] == 'I')
                n -= 2;
            break;
        case 'X':
            n += 10;
            if (Num[N - 1] == 'I')
                n -= 2;
            break;
        case 'L':
            n += 50;
            if (Num[N - 1] == 'X')
                n -= 20;
            break;
        case 'C':
            n += 100;
            if (Num[N - 1] == 'X')
                n -= 20;
            break;
        case 'D':
            n += 500;
            if (Num[N - 1] == 'C')
                n -= 200;
            break;
        case 'M':
            n += 1000;
            if (Num[N - 1] == 'C')
                n -= 200;
            break;
        }
    }
    cout << "The integer of the Roman numeral is: " << n;
}