#include <iostream>
using namespace std;

int main()
{
    int N, number;
    int Sum_K = 0; 
    int Pro_K = 1; 
    cout << "enter N : ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> number; 
        int K = 1;     
        while (K * K < number)
        {
            K++;
        }
        if (K * K == number)
        {
            cout << number << " ";
            Sum_K += K;
            Pro_K *= K;
        }
    }
    cout << Sum_K << endl
         << Pro_K << endl;
    int Sum_root = 1;
    while (Sum_root * Sum_root < Sum_K)
    {
        Sum_root++;
    }
    if (Sum_root * Sum_root == Sum_K)
    {
        cout << Sum_K << " is a perfect sequare ." << endl;
    }
    else
    {
        cout << Sum_K << " is not perfect square ." << endl;
    }
    int Pro_root = 1;
    while (Pro_root * Pro_root < Pro_K)
    {
        Pro_root++;
    }
    if (Pro_root * Pro_root == Pro_K)
    {
        cout << Pro_K << " is a perfect sequare ." << endl;
    }
    else
    {
        cout << Pro_K << " is not perfect sequare ." << endl;
    }
    return 0;
}