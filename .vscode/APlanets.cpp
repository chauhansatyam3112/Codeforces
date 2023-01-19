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
        int m;
        int r = 0;
        /* code */ int n, c;
        cin >> n >> c;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
            mp[v[i]]++;
        }
        for (auto it : mp)
        {
            int p = min(c, it.second);
            r += p;
        }
        cout << r << endl;
    }
}