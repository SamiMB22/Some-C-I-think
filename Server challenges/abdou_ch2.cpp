#include <iostream>
#include <string>

using namespace std;

// Function checkBalance to check the balance,\
    deposit to deposit money, \
    withdraw to withdraw money,\
    userDetails to display user details,\
    updateMobile to update mobile number ,\
    Exit to exit the program
void checkBalance(double balance);
void Deposit(double &balance);
void Withdraw(double &balance);
void userDetails(const string name, const string password,const long int &mobile);
void updateMobile(long int &mobile);
void Exit();

int main() {
    string name, password;
    long int mobile;
    double balance = 0;  // Use double for balance to support decimals

    cout << "====Welcome to ATM====" << endl;
    cout << "==Login==" << endl;
    cout << "=Enter account Name: ";
    cin >> name;
    cout << "=Enter account password: ";
    cin >> password;
    cout << "=Enter your mobile number: ";
    cin >> mobile;
    cout << "========= Welcome " << name << " =========" << endl;
    cout << "=Enter initial balance: ";
    cin >> balance;

    int option;
    while (true) {
        system("cls");
        cout << "1. Check balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. User details\n";
        cout << "5. Update mobile number\n";
        cout << "6. Exit\n";
        cout << "Enter option: ";
        cin >> option;

        switch (option) {
            case 1:
            system("cls");
                checkBalance(balance);
                break;
            case 2:
            system("cls");
                Deposit(balance);
                break;
            case 3:
            system("cls");
                Withdraw(balance);
                break;
            case 4:
            system("cls");
                userDetails(name, password, mobile);
                break;
            case 5:
            system("cls");
                updateMobile(mobile);
                break;
            case 6:
            system("cls");
                Exit();
                return 0;
            default:
                cout << "Invalid option, please try again.\n";
        }
        cout << "\nPress Enter to continue...";
        cin.ignore(); // Clear the input buffer
        cin.get(); // Wait for user to press Enter
    }
    return 0;
}

// Function implementations

void checkBalance(double balance) {
    cout << "Your current balance is: " << balance << endl;
}

void Deposit(double &balance) {
    double deposit;
    cout << "Enter deposit amount: ";
    cin >> deposit;
    if (deposit > 0) {
        balance += deposit;
        cout << "Deposit successful. New balance: " << balance << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

void Withdraw(double &balance) {
    double withdraw;
    cout << "Enter withdraw amount: ";
    cin >> withdraw;
    if (withdraw > balance) {
        cout << "Insufficient funds." << endl;
    } else if (withdraw <= 0) {
        cout << "Invalid withdrawal amount." << endl;
    } else {
        balance -= withdraw;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }
}

void userDetails(const string name, const string password, const long int &mobile) {
    cout << "User Details:\n";
    cout << "Name: " << name << endl;
    cout << "Password: " << password << endl;
    cout << "Mobile: " << mobile << endl;
}

void updateMobile(long int &mobile) {
    cout << "Enter new mobile number: ";
    cin >> mobile;
    cout << "Mobile number updated successfully." << endl;
}

void Exit() {
    cout << "Exinting......" << endl;
}
