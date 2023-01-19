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
        /* code */ int n;
        cin >> n;
        vector<int> v(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            /* code */ cin >> v[i];
        }
        sort(v.begin(), v.end());
        int m = v.size();
        int ans = v[n] - v[n - 1];
        cout << ans << endl;
    }
}