#include <iostream>
using namespace std;
int main()
{
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        v = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << v << " ";
            v = v * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
