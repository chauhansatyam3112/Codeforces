#include <bits/stdc++.h>
using namespace std;

//#define read(n)
//cin >> n;
//#define read(t)
//cin >> t;
#define endl "\n"
#define ll long long
#define ull unsigned long long

void solve()
{
    ll n;
    cin>>n;
    ll p = (n + 1) / 2;
    cout << p << endl;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        ll q = (i * 3 + 1);
        ll m = (n * 3) - (i * 3 + 1) + 1;
        cout << q << " " << m << " " << endl;
    }
}

int main()
{
    int t;
    //read(t);
    cin>>t;
    while (t--)
    {
        solve();
    }
}