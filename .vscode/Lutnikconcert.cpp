#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int a, b, c;
        cin >> a >> b >> c;
        int p = a * 1 + 2 * b;
        int q = c * 3;
        int rem = p % q;
        cout << rem << endl;
    }
}