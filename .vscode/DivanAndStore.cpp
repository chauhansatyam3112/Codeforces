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
        /* code */ int n, l, r, k;
        int cnt = 0;
        cin >> n >> l >> r >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (l <= x && r >= x)
                v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            /* code */ if (k >= v[i])
            {
                cnt++;
                k -= v[i];
            }
        }
        cout << cnt << endl;
    }
}