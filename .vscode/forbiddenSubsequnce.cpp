#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ string s, T;
        cin >> s >> T;
        if (T != "abc")
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        int c[26] = {0};
        for (int i = 0; i < 26; i++)
        {
            /* code */ c[s[i] - 97]++;
        }
        if (c[0] == 0 || c[1] == 0 || c[2] == 0)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            while (c[0] > 0)
            {
                /* code */ cout << 'a';
                c[0]--;
            }
            while (c[2] > 0)
            {
                /* code */ cout << 'c';
                c[2]--;
            }
            while (c[1] > 0)
            {
                /* code */ cout << 'b';
                c[1]--;
            }
        }
        for (int i = 3; i < 26; i++)
        {
            while (c[i] > 0)
            {
                /* code */ cout << char(i + 97) << endl;
                c[i]--;
            }
        }
    }
}