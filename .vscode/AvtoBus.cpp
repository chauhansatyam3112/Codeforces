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
        /* code */ ll n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        if (n == 2)
        {
            cout << -1 << endl;
            return 0;
        }
        cout << floor(n / 2) << " " << floor(n / 3) << endl;
    }
}