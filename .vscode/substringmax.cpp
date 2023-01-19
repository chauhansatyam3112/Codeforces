#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        string arr;
        cin >> arr;

        // vector<int>arr(n);
        ll zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */ // cin >> arr[i];
            if (arr[i] == '0')
                zero++;
            else
                one++;
        }
        ll ans = zero * one;
        ll zer = 0, on = 0;
        ll maxzer = 0, maxon = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */ if (arr[i] == '0')
            {
                zer++;
                maxzer = max(maxzer, zer);
            }
            else
            {
                zer = 0;
            }
        }
        for (int i = 0; i < n; i++)

        {
            if (arr[i] == '1')
            {
                on++;
                maxon = max(on, maxon);
            }
            else
            {
                on = 0;
            }
        }
        maxzer = maxzer * maxzer;
        maxon = maxon * maxon;
        ll res = max({maxzer, maxon, ans});
        cout << res << endl;
    }
}