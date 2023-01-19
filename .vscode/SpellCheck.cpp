#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    set<string> s = {"Timur", "miurT", "Trumi", "mriTu"};

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        /* code */

        string a;
        cin >> a;

        auto pos = s.find(a);

        // print element if it is present in set
        if (pos != s.end())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
