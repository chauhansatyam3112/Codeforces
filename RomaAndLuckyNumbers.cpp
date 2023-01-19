#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    while (n--)
    {
        /* code */ string x;
        cin >> x;
        ll count = 0;
        for (ll i = 0; i < x.size(); i++)

        {

            /* code */ if (x[i] == '7' || x[i] == '4')

                count++;
        }
        if (count <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
}