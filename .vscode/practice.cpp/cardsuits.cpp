#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    string str;
    cin >> str;
    string str1;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        cin >> str1;
        if (str1[0] == str[0] || str1[0] == str1[1] || str1[1] == str[0] || str1[1] == str[1])
        {

            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}