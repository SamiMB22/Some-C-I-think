#include <iostream>
using namespace std;

int main() {
    float Mohamed, Amine, Mustafa;
    
    cout << "Mohamed's grade is: "; cin >> Mohamed;
    cout << "Amine's grade is: "; cin >> Amine;
    cout << "Mustafa's grade is: "; cin >> Mustafa;

    // 1
    if (Amine > 10 && Mohamed > 10 && Mustafa > 10) 
    {
        cout << "All students have passed their exams." << endl;
    }

    // 2
    if (Amine > 10 || Mustafa > 10 || Mohamed > 10) 
    {
        cout << "At least one student has passed the exam." << endl;
    }

    // 3
    if (Amine > 10 && Mustafa <= 10 && Mohamed <= 10) 
    {
        cout << "Only Amine has passed the exam." << endl;
    }

    // 4
    if ((Amine > 10 && Mustafa <= 10 && Mohamed <= 10) || (Amine <= 10 && Mustafa <= 10 && Mohamed > 10) || (Amine <= 10 && Mustafa > 10 && Mohamed <= 10)) 
    {
        cout << "Only one student has passed the exam." << endl;
    }

    // 5
    if ((Amine > 10 && Mustafa > 10 && Mohamed <= 10) || (Amine > 10 && Mustafa <= 10 && Mohamed > 10) || (Amine <= 10 && Mustafa > 10 && Mohamed > 10)) 
    {
        cout << "Two students have passed the exam." << endl;
    }

    // 6
    if (Amine > 10 && Mohamed > 10 && Mohamed == Amine) 
    {
        cout << "Amine and Mohamed have passed the exam and obtained the same grade." << endl;
    }

    // 7
    if (Amine > 10 && Mohamed > 10 && Mohamed == Amine && Mustafa <= 10) 
    {
        cout << "Only Amine and Mohamed have passed the exam and obtained the same grade." << endl;
    }

    // 8
    if (Mohamed > Mustafa && Mohamed > Amine) 
    {
        cout << "Mohamed has obtained the highest grade." << endl;
    }

    // 9
    if (Amine > 15 || Mohamed > 15 || Mustafa > 15) 
    {
        cout << "One of the students has obtained a grade of 15/20 or higher." << endl;
    }

    // 10
    if (Amine == Mohamed && Mohamed == Mustafa) 
    {
        cout << "All three students have obtained the same grade." << endl;
    }

    // 11
    if (Amine != Mohamed && Amine != Mustafa && Mohamed != Mustafa) 
    {
        cout << "The students have obtained different grades." << endl;
    }
    
    return 0;
}
