#include <iostream>
using namespace std;
int main()
{
    /*Write a C++ program that reads two matrices A and B, then calculate and
           display matrix C; the sum of these two matrices?*/
    float s[5], n[5], m[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter n "<<i+1<<" : ";
        cin >> n[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter m "<<i+1<<" : ";
        cin >> m[i];
    }
    cout<<"======sum======"<<endl;
    for(int i = 0; i < 5; i++)
    {
    s[i]=n[i]+m[i];
    cout<<"the sum of "<<i+1<<" is : "<<s[i]<<endl;
    }
    return 0;
}