#include <iostream>
using namespace std;
int N, N2, i, d;

int main()
{
    cin >> N;
    cin >> N2;

    if (N > N2)
    {
        d = N;
        N = N2;
        N2 = d;
    }
    N++;
    for (i = N; i < N2; i++)
    {
        if (i % 2 == 0)
            continue;
        if (i == N or i == N + 1)
        {
            cout << i << endl;
            continue;
        }
        cout << i << endl;
    }
    cout << endl;
    return 0;
}