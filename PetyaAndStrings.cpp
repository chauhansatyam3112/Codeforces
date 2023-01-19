#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;string s2;cin >> s1;cin >> s2; 
    for (int i = 0; i < s1.length(); i++)
    {
        char c = s1[i];
        if (isupper(c))
        {
            s1[i] = tolower(c);
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        char c = s2[i];
        if (isupper(c))
        {
            s2[i] = tolower(c);
        }
    }

    if (s1 == s2)
    {
        cout << '0';
    }
    else if (s1 > s2)
    {
        cout << '1';
    }
    else
    {
        cout << '-'<<'1';
    }
}