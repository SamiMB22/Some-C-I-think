#include <iostream>
using namespace std;
int main()
{
    float UrMoney, Price, cash[4];
    int choice;
    cout << "How many.." << endl;
    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
        case 1:
            cout << "Quarters : ";
            break;
        case 2:
            cout << "Dimes : ";
            break;
        case 3:
            cout << "Nickels : ";
            break;
        case 4:
            cout << "Pennies : ";
            break;
        }
        cin >> cash[i];
    }
    UrMoney = (cash[1] * 0.25) + (cash[2] * 0.10) + (cash[3] * 0.05) + (cash[4] * 0.01);
    cout << "So u have $" << UrMoney << endl;
    cout << "The item price is ";
    cin >> Price;
    if (UrMoney < Price)
    {
        cout << "Sorry man,but u are broke.." << endl;
        return 0;
    }
    else
    {
        cout << "U have enough money to buy it ,U wanna buy?(yes=1/no=0)";
        cin >> choice;
        if (choice == 1)
        {
            cout << "You bought the item! Your remaining balance is $" << UrMoney - Price << endl;
            cout << "Thx for buying :)";
        }
        else if (choice == 0)
        {
            cout << "You chose not to buy the item. Your balance remains $" << UrMoney << endl;
            cout << "**what a stingy person :(**";
        }
    }
    return 0;
}