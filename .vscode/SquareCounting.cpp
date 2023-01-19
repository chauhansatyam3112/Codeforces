#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll n, s;
        cin >> n >> s;
        ull cnt = 0;
        ull sum = 0;
        if (s == 1)
            cout << 1 << endl;
        // return 0;
        else if (s == 0)
            cout << 0 << endl;
        // return 0;
        // int t = n;
        else
        {

            while (sum < s)
            {

                /* code */ sum += (n * n);
                if (sum > s)
                    break;
                cnt++;
                // s -= sum;
                // if (s < n * n)

                // break;
            }
            cout << cnt << endl;
        }
    }
}