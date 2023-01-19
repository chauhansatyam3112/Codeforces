#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        /* code */ ll m, s;
        cin >> m >> s;
        vector<ll> v(m);
        ll maxi = 0;
        unordered_map<ll, bool> mp;
        for (int i = 0; i < m; i++)
        {
            /* code */ cin >> v[i];
            mp[v[i]] = true;
            maxi = max(v[i], maxi);
        }
        ll p = 1;
        while (s > 0)
        {
            /* code */ while (mp[p] == true)
            {
                /* code */ p++;
            }
            maxi = max(maxi, p);
            s = s - p;
            mp[p] = true;
        }
        if (s == 0 && mp.size() == maxi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}