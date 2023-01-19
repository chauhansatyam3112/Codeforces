#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int m = str.length();string ans;
    int i = 0;
    while (m--)
    {
        /* code */ if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            // str.erase(str.begin() + i);
            // str.erase(str.begin() + (i + 1));
            // str.erase(str.begin() + (i + 2));
            //str.erase(i, i + 3);
           // i = 0;
            // str.erase(str.begin() + i, str.begin() + (i + 2));
            i+=3;
        }
        else
        {
            cout << str[i];
            i++;
        }
        cout << " ";
    }

    // cout << str;
}