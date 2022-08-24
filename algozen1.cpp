#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, y;
    cin >> d >> y;
    switch (d)
    {
    case 1:
        switch (y)
        {
        case 1:
            cout << "the department is 1 and the year of study is 1st" << endl;
            break;
        case 2:
            cout << "the department is 1 and the year of study is 2nd" << endl;
            break;
        case 3:
            cout << "the department is 1 and the year of study is 3rd" << endl;
            break;
        default:
            cout << "the option does not match1" << endl;
        }
        break;
    case 2:
        switch (y)
        {
        case 1:
            cout << "the department is 2 and the year of study is 1st" << endl;
            break;
        case 2:
            cout << "the department is 2 and the year of study is 2nd" << endl;
            break;
        case 3:
            cout << "the department is 2 and the year of study is 3rd" << endl;
            break;
        case 4:
            cout << "the department is 2 and the year of study is 4th" << endl;
            break;
        default:
            cout << "the option does not match2" << endl;
        }
        break;
    default:
        cout << "the option is incorrect3" << endl;
    }
    int space = 5;
    for (int i = 1; i <= 6; i++)
    {

        // Allot spaces
        for (int s = 1; s <= space; s++)
        {
            cout << " ";
        }
        space--; // since the space decreases with every level
        char ch;
        if (i % 2 == 1)
        {
            ch = '*';
        }
        else
            ch = '#';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}