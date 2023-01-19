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
        /* code */ int a, b, c;
        cin >> a >> b >> c;
        int m = a + b;
        int n = b + c;
        int q = a + c;
        if (a == n)
        {
            cout << "yes" << endl;
        }
        else if (b == q)
        {
            cout << "yes" << endl;
        }
        else if (c == m)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}