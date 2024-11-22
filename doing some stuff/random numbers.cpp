#include <iostream>
#include <string>
using namespace std;

int main() 
{
   string name, libraryId;
   string validIds[] ={"lib1","lib2","lib3","lib4","lib5"};
   bool isvalid = false;

   cout<<"Enter the user's name : ";
   cin>> name;
   cout<<"Enter the libraryId : ";
   cin>> libraryId;
    for (int i = 0; i < 5; i++)
    {
        if (libraryId == validIds[i])
        {
            isvalid = true;
            break;
        }
        
    }
    if (isvalid)
    {
        cout<<"bs7tk lktab.";
    }else {
        cout<<"tdi ch3r.";
    }
    return 0;
    
}