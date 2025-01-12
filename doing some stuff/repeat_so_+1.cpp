#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "how many numbers u wanna enter : ";
    cin >> n;

    int nbr[n]; 
    int repeat = 0;

    cout << "enter the " << n << " numbers : ";
    for (int i = 0; i < n; i++) { 
        cin >> nbr[i];
    }

    for (int i = 0; i < n; i++) {
        bool dblc = false;
        for (int j = 0; j < i; j++) { 
            if (nbr[i] == nbr[j]) {
                dblc = true;
                break; 
            }
        }
        if (dblc) {
            repeat++;
        }
    }

    cout << "there are " << repeat << " repeated numbers in the list";

    return 0;
}