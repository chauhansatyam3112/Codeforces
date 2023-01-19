#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */

        int l, r;
        cin >> l >> r;
        int a = l;
        int b = 2 * l;
        if (b <= r)
            cout << a << " " << b << endl;
        else
            cout << -1 << " " << -1 << endl;
    }
}