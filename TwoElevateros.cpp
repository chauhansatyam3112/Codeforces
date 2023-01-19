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
    ll a, b, c;
    ll d = 0;
    while (t--)
    {

        cin >> a >> b >> c;
        int temp = abs(b - c) + c;
        if (a < temp)
        {
            cout << 1 << endl;
        }
        else if (a > temp)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}