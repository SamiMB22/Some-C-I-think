#include <iostream>
#include <string>
using namespace std;

const int MAX_CONTACT = 200;
int contour = 0;

struct Contact {
    string name;
    string phone_number;
    string email;
};

Contact container[MAX_CONTACT];

bool addContact(Contact &contact) {
    cout << "Enter name: ";
    cin>> contact.name;

    cout << "Enter phone number: ";
    cin>> contact.phone_number;

    cout <<"Enter email: ";
    cin>> contact.email;

    container[contour++] = contact;

    if (!contact.name.empty() && !contact.phone_number.empty() && !contact.email.empty()) {
        cout << "Your contact has been saved successfully. "<< endl;
        return true;
    } else {
        cout << "Failed to save contact. Name or phone or email number is empty." << endl;
        return false;
    }
}

void displayContact(const Contact &contact) {
    for (int i = 0; i < contour; i++)
    {
        cout << "Contact " << i + 1 << endl;
        cout << "Name: " << container[i].name << ", Phone Number: " << container[i].phone_number << ",Email: "<< container[i].email << endl;
    }
}

int main() {
    Contact contact;
    int choice;
    cout<<"Welcome to Contact Manager System"<<endl;
    cout<<"==================================="<<endl;
    do {
        cout << "1. Add Contact" << endl;
        cout << "2. Display Contact" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact(contact);
                break;
            case 2:
                displayContact(contact);
                break;
            case 3:
                cout << "Exiting.:(" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}