#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float A, B, C;
cout<<"Mohamed enter your grade: ";
cin>> A;
cout<<"Amine enter your grade: ";
cin>> B;
cout<<"Moustafa enter your grade: ";
cin>> C;





cout<<"All student passed the exam: " <<((A>10)and(B>10)and(C>10)) <<endl

<<"At least one student has passed the exam: " <<((A>10)or(B>10)or(C>10)) <<endl

<<"Only Amine has passed the exam: " <<((B>10)and(A<=10)and(C<=10)) <<endl

<<"Only one student has passed the exam: " <<(((A>10)and((B<=10)and(C<=10)))or((B>10)and((A<=10)and(C<=10)))or((C>10)and((A<=10)and(B<=10)))) << endl

<<"Two students have passed the exam: " <<(((A>10)and(B>10))or((A>10)and(C>10))or((B>10)and(C>10))) <<endl

<<"Amine and Mohamed have passed the exam and obtained the same grade: " <<((A>10)and(B>10)and(A==B)) <<endl

<<"Only Amine and Mohamed have passed the exam and obtained the same grade: " <<((A>10)and(A==B)and(C<=10)) <<endl

<<"Mohamed has obtained the highest grade: " <<((A>B)and(A>C)) <<endl

<<"One of the students has obtained a grade of 15/20 or higher: " <<((A==15)or((B==15)or(C==15))) <<endl

<<"All three students has obtained the same grade: " <<((A==B)and(A==C)and(B==C))  <<endl

<<"The students have obtained diffrent grades: " <<((A!=B)and(A!=C)and(B!=C));

return 0;
}