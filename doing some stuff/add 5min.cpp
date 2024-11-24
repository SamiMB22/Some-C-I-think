#include <iostream>
using namespace std;
int main()
{
    int h, m, x;
    do{
    cout << "Enter the hour : ";
    cin >> h;
    cout << "enter the minutes : ";
    cin >> m;
    if(h>23 || m>59)
    {
        cout<<"type it again....."<<endl;
    }
    }while(h>23 || m>59);
    x = m + 5;
    if (x >= 60)
    {
        h = h + 1;
        if (h > 23)
        {
            h = 00;
        }
        x=x-60;
        cout << "the time is " << h << " h :" << x << " min" << endl;
    }
    else
    {
        cout << "the time is " << h << " h ," << m << " min" << endl;
    }
}
