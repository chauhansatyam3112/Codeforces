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
        /* code */ int n, k;
        cin >> n >> k;
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> p[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> p[i].second;
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i].first <= k)
                k += p[i].second;
        }
        cout << k << endl;
    }
}