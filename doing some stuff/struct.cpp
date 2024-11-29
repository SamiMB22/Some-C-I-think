#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct human
    {
        int age;
        string name;
        int id_number;
        bool dead;
    };
    human human1;
    human1.age=19;
    human1.name="hamid";
    human1.id_number=156245;
    human1.dead=false;

    human human2;
    human2.age=18;
    human2.name="sami";
    human2.id_number=69;
    human2.dead=true;

    cout<<human1.age<<endl;
    cout<<human1.name<<endl;
    cout<<human1.id_number<<endl;
    cout<<human1.dead<<endl;

    cout<<human2.age<<endl;
    cout<<human2.name<<endl;
    cout<<human2.id_number<<endl;
    cout<<human2.dead<<endl;
}