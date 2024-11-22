#include <iostream>

using namespace std;
int main()
{
    int P, thousands, hundreds, tens, ones;
    cout << "=================Enter the Price=================" << endl;
    cin >> P;

    if (P < 0 || P >= 9999)
    {
        cout << "pls enter a 4 digit positive number:)" << endl;
    }
    else
    {
        thousands = (P / 1000) % 10;
        hundreds = (P / 100) % 10;
        tens = (P / 10) % 10;
        ones = P % 10;

        if (thousands != 0)
        {
            switch (thousands)
            {
            case 1:
                cout << "one thousand ";
                break;
            case 2:
                cout << "two thousand ";
                break;
            case 3:
                cout << "three thousand ";
                break;
            case 4:
                cout << "four thousand ";
                break;
            case 5:
                cout << "five thousand ";
                break;
            case 6:
                cout << "six thousand ";
                break;
            case 7:
                cout << "seven thousand ";
                break;
            case 8:
                cout << "eight thousand ";
                break;
            case 9:
                cout << "nine thousand ";
                break;
            }
        }

        if (hundreds != 0)
        {
            switch (hundreds)
            {
            case 1:
                cout << "one hundred ";
                break;
            case 2:
                cout << "two hundred ";
                break;
            case 3:
                cout << "three hundred ";
                break;
            case 4:
                cout << "four hundred ";
                break;
            case 5:
                cout << "five hundred ";
                break;
            case 6:
                cout << "six hundred ";
                break;
            case 7:
                cout << "seven hundred ";
                break;
            case 8:
                cout << "eight hundred ";
                break;
            case 9:
                cout << "nine hundred ";
                break;
            }

            if (tens != 0 || ones != 0)
            {
                cout << "and ";
            }
        }

        if (tens != 0)
        {
            if (tens > 1)
            {
                switch (tens)
                {
                case 2:
                    cout << "twenty";
                    break;
                case 3:
                    cout << "thirty";
                    break;
                case 4:
                    cout << "forty";
                    break;
                case 5:
                    cout << "fifty";
                    break;
                case 6:
                    cout << "sixty";
                    break;
                case 7:
                    cout << "seventy";
                    break;
                case 8:
                    cout << "eighty";
                    break;
                case 9:
                    cout << "ninety";
                    break;
                }

                if (ones > 0)
                {
                    cout << " ";
                    switch (ones)
                    {
                    case 1:
                        cout << "one";
                        break;
                    case 2:
                        cout << "two";
                        break;
                    case 3:
                        cout << "three";
                        break;
                    case 4:
                        cout << "four";
                        break;
                    case 5:
                        cout << "five";
                        break;
                    case 6:
                        cout << "six";
                        break;
                    case 7:
                        cout << "seven";
                        break;
                    case 8:
                        cout << "eight";
                        break;
                    case 9:
                        cout << "nine";
                        break;
                    }
                }
            }
            else if (tens == 1)
            {
                switch (ones)
                {
                case 0:
                    cout << "ten";
                    break;
                case 1:
                    cout << "eleven";
                    break;
                case 2:
                    cout << "twelve";
                    break;
                case 3:
                    cout << "thirteen";
                    break;
                case 4:
                    cout << "fourteen";
                    break;
                case 5:
                    cout << "fifteen";
                    break;
                case 6:
                    cout << "sixteen";
                    break;
                case 7:
                    cout << "seventeen";
                    break;
                case 8:
                    cout << "eighteen";
                    break;
                case 9:
                    cout << "nineteen";
                    break;
                }
            }
        }
        else if (ones != 0)
        {
            cout << "and ";
            switch (ones)
            {
            case 1:
                cout << "one";
                break;
            case 2:
                cout << "two";
                break;
            case 3:
                cout << "three";
                break;
            case 4:
                cout << "four";
                break;
            case 5:
                cout << "five";
                break;
            case 6:
                cout << "six";
                break;
            case 7:
                cout << "seven";
                break;
            case 8:
                cout << "eight";
                break;
            case 9:
                cout << "nine";
                break;
            }
        }
        cout << " Dinar Algerian";
    }
    if (P == 0)
    {
        cout << "there no price in here:/";
    }

    cout << endl;
    return 0;
}
