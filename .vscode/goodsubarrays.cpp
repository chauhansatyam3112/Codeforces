#include <bits/stdc++.h>
using namespace std;
#define ll long long
// void solve(){
signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll i = 0;
        ll j = 0;
        ll k = 1;
        ll ans = 0;
        while (j < n)
        {
            while (i < n && k > arr[j])
            {
                i++;
                k--;
            }

            ans += (j - i + 1);
            j++;
            k++;
        }

        cout << ans << "\n";
    }
}

/*signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}*/