#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cout << "enter the first number a : ";
    cin >> a;
    cout << "enter the second number b : ";
    cin >> b;

    n = a;

    if (a > b) {
        a = a - 1;
        while (a > b) {
            if (a % 2 != 0) {
                cout << a << ", ";
            }
            a = a - 1;
        }
    } else if (a < b) {
        a = a + 1;
        while (a < b) {
            if (a % 2 != 0) {
                cout << a << ", ";
            }
            a = a + 1;
        }
    }
    return 0;
}
