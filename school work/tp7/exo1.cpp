#include <iostream>
using namespace std;
int main()
{
    float note[5], average, a;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter ur modules grade : ";
        cin >> note[i];
        a = a + note[i];
    }
    average = (a) / 5;
    cout << "the average is : " << average << endl;
    return 0;
}