#include <iostream>
#include <string>

using namespace std;

int main()
{
    string binary;
    cout<<"==This is a decimal calculator=="<<endl;
    cout<<"Enter a binary number: ";
    cin>> binary;
    double decimal = stoi(binary, nullptr, 2);
    cout<<"the decimal number of the number "<< binary <<" is: "<<decimal<<endl;
    return 0;
}