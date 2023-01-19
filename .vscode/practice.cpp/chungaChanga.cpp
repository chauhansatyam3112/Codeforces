#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    int ans = 0;
    ll x, y, z;
    cin >> x >> y >> z;
    ll total = (x + y) / z;
    cout << total << " ";
    ll another = x / z + y / z;
    ll a = z - (x % z);
    ll b = z - (y % z);
    if (another < total)
        cout << min(a, b);
    else
        cout << 0 << endl;
}