using namespace std;
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll a, b, c;
        cin >> a >> b >> c;

        int f = -1, s = -1;
        if (a < c)
            f = 1;
        if (a * b > c)
            s = b;
        cout << f << " " << s << endl;
    }
}