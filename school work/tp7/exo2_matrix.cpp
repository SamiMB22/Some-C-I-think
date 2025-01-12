#include <iostream>
using namespace std;
int main()
{
    int A[3][2], B[3][2], C[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter A [" << i+1 << "][" << j+1 << "] : ";
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter B [" << i+1 << "][" << j+1 << "] : ";
            cin >> B[i][j];
        }
    }
    cout << "==========SUM==========" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = B[i][j] + A[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "the sum of B[" << i+1 << "][" << j+1 << "] and A[" << i+1 << "][" << j+1 << "] is : " << C[i][j]<<endl;
        }
    }
    return 0;
}