#include <iostream>
using namespace std;
int main()
{
    int number, reverse, nbr;
    cout << "enter a number : ";
    cin >> number;
    reverse = 0;
    while (number > 0)
    {
        reverse = (reverse * 10) + number % 10;
        number = number / 10;
    }
    cout << "the reverse is : " <<reverse<< endl;
    return 0;
}