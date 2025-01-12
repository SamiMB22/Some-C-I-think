#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    bool repeat = false;
    do
    {
        cout << " Enter the first number : ";
        cin >> a;
        cout << " Enter the second number : ";
        cin >> b;
        int choice;
        cout << "Choose the operation you want to perform :" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            c = a + b;
            cout << "Result: " << c << endl;
            break;
        case 2:
            c = a - b;
            cout << "Result: " << c << endl;
            break;
        case 3:
            c = a * b;
            cout << "Result: " << c << endl;
            break;
        case 4:
            if (b != 0)
            {
                c = a / b;
                cout << "Result: " << c << endl;
            }
            else
            {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cout << "do u wanna repeat this operation? (1/0)|(true/false) : ";
        cin >> repeat;
    } while (repeat == true);
    return 0;
}
