#include <iostream>
/*Write a program that asks the user to enter the radius of a circle,
 Calculate the area of the circle (You can use a constant value for π (pi), such as 3.14159)*/
using namespace std;
int main()
{
    float radius, Pi, area;
    cout<<"give me the radius of the circle:  ";
    cin>> radius;
    //calculating the area of the circle
    Pi=3.14159;
    area=  Pi * radius * radius;
    cout<<"the area of this circle with the radius "<<radius <<" is " << area <<endl;
    return 0;
}