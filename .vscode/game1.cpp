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
        /* code */ int helloworld;
        cin >> helloworld;
        ll hellok = 0;
        ll t = -3333;
        ll helloz = t;
        ll int helloarr[helloworld];
        ll hellol = 0;
        for (int helloi = 0; helloi < helloworld; helloi++)
        {
            /* code */ cin >> helloarr[helloi];
            hellok = hellok + helloarr[helloi];
        }
        ll int helloarrb[helloworld];
        for (int helloi = 0; helloi < helloworld; helloi++)
        {
            /* code */ cin >> helloarrb[helloi];
            hellol = hellol + helloarrb[helloi];
            helloz = max(helloz, helloarrb[helloi]);
        }
        ll answer = hellok + hellol - helloz;
        cout << answer << endl;
    }
}