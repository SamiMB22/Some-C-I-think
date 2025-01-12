#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, nbr;
    struct Date
    {
        int day;
        int month;
        int year;
    };
    struct municipality
    {
        string name;
        Date CreationDate;
        int SurfaceArea;
        int Population;
    };

    cout << "Enter the number of municipalitys : ";
    cin >> n;
    municipality m[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name for municipality " << i + 1 << ": ";
        cin >> m[i].name;
        cout << "Enter the Creation date for municipality " << m[i].name << " (day month year): ";
        cin >> m[i].CreationDate.day >> m[i].CreationDate.month >> m[i].CreationDate.year;
        cout << "Enter the SurfaceArea for municipality " << m[i].name << ": ";
        cin >> m[i].SurfaceArea;
        cout << "Enter the Population for municipality " << m[i].name << ": ";
        cin >> m[i].Population;
    }
    cout << "Enter the population limit number : ";
    cin >> nbr;
    cout << "=====================informations=====================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "municipality " << m[i].name << " information:\n";
        cout << "Name: " << m[i].name << "\n";
        cout << "Creation Date (day month year): " << m[i].CreationDate.day << "/" << m[i].CreationDate.month << "/" << m[i].CreationDate.year << "\n";
        cout << "SurfaceArea: " << m[i].SurfaceArea << "\n";
        cout << "Population: " << m[i].Population << "\n";
        if (m[i].CreationDate.year < 2009)
        {
            cout << "This place is expired..." << endl;
        }
        else
        {
            cout << "This place still new" << endl;
        }
        if (m[i].Population > nbr)
        {
            cout << "The population is over the limit" << endl;
        }
        else
        {
            cout << "The population is under the limit, everything is okai" << endl;
        }
    }
    return 0;
}