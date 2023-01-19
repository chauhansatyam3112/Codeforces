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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        ll p = 3 * (10 - n) * (9 - n);
        cout << p << endl;
    }
}