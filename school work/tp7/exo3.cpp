#include <iostream>
using namespace std;
int main()
{
    int n, nbr[n];
    cout << "how many numbers u wanna enter : ";
    cin >> n;
    cout<<"enter the "<<n<<" numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nbr[i];
    }
    cout<<"numbers without dblc : ";
    for (int i = 0; i < n; i++)
    {
        bool dblc = false;
        for (int j = 0; j < i; j++)
        {
            if (nbr[i] == nbr[j])
            {
                dblc = true;
            }
        }
        if (dblc == true)
        {
            continue;
        }
        cout << nbr[i] << " ";
    }

    return 0;
}