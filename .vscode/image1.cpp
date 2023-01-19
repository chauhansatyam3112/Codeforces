
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        unordered_map<char, int> mp;
        int t = 0;
        for (auto it : s1)
        {
            mp[it]++;
            t = max(t, mp[it]);
        }
        for (auto it : s2)
        {
            mp[it]++;
            t = max(t, mp[it]);
        }
        if (t == 4)
        {
            cout << 0 << endl;
        }
        else if (t == 3)
        {
            cout << 1 << endl;
        }
        else if (t == 2)
        {
            int cnt = 0;
            for (auto it : mp)
            {
                if (it.second == 2)
                {
                    cnt++;
                }
            }
            if (cnt == 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 3 << endl;
        }
    }
}