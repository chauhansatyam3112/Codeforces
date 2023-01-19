#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

int main()
{
    ll t;
    cin >> t;
    string mini = "", currmin;
    while (t--)
    {

        /* code */ string s, a = "", b = "";
        cin >> s;
        char min = 'z';
        for (int i = 0; i < s.length(); i++)
        {

            // find smallest alphabet

            if (s[i] < min)
                min = s[i];
        }
        cout << (a + min) << endl;
        // auto it = s.find(min);
        s.erase(min);
        cout << s << endl;
    }
}