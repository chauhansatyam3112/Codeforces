#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define int int64_t
#define pb push_back
#define endl '\n'
#define pll pair<int, int>
#define vll vector<int>
#define all(a) (a).begin(), (a).end()
#define in(a) insert(a)
#define F first
#define S second
#define sz(x) (int)x.size()
#define hell 1000000007
#define lbnd lower_bound
#define ubnd upper_bound
#define bs binary_search
#define mi map<int, int>
#define set_bits(x) _builtin_popcount(x)
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) * (b)) / gcd((a), (b))
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define REPI(i, a, b) for (ll i = b - 1; i >= a; i--)
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> vec;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.pb({x, y});
    }
    for (auto it : v)
    {
        if (it.S > k)
        {
            vec.pb(it.F - (it.S - k));
        }
        else
        {
            vec.pb(it.F);
        }
    }
    sort(all(vec));
    reverse(all(vec));
    cout << vec[0];
}
