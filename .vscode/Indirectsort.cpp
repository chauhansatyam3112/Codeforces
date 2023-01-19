#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define MOD 1000000007
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        int mid = (n - 1) / 2;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        if (v[0] == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        /*for (int i = 0; i < n; i++)
        {
            if (v[i] == n && i == mid)
            {
                cout << "yes" << endl;
                return 0;
            }
        }
        cout << "no" << endl;*/
    }
    return 0;
}