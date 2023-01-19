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
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n), ans(k);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            ans[(i + 1) % k] = max(ans[(i + 1) % k], a[i]);
        }

        long long out = 0;

        for (int i = 0; i < k; i++)
            out += ans[i];

        cout << out << endl;
        //<< endl;
    }
}