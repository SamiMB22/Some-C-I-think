#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many numbers you want to enter: " << endl;
    cin >> n;
    int nbr[n];
    
    // Input the numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> nbr[i];
    }

    // Remove duplicates
    int unique[n]; // Array to store unique elements
    int uniqueCount = 0; // Counter for unique elements

    for (int i = 0; i < n; i++)
    {
        int duplicateFound = 0; // Counter to track matches
        for (int j = 0; j < uniqueCount; j++)
        {
            if (nbr[i] == unique[j])
            {
                duplicateFound++;
                break;
            }
        }
        if (duplicateFound == 0)
        {
            unique[uniqueCount] = nbr[i];
            uniqueCount++;
        }
    }

    // Output unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
