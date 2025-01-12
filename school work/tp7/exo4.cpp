#include <iostream>
using namespace std;

int main()
{
    int wiw, waw;
    cout << "How many wiw (rows) do you want : ";
    cin >> wiw;
    cout << "How many waw (columns) do you want : ";
    cin >> waw;
    int A[wiw][waw], B[waw][wiw];
    for (int i = 0; i < wiw; i++)
    {
        for (int j = 0; j < waw; j++)
        {
            cout << "Enter A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < wiw; i++)
    {
        for (int j = 0; j < waw; j++)
        {
            B[j][i] = A[i][j];
        }
    }
    cout << "====chaange====" << endl;
    for (int i = 0; i < waw; i++)
    {
        for (int j = 0; j < wiw; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}