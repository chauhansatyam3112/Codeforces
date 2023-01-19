#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    char a[504][504];
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll n, k, x, y;
        cin >> n >> k >> x >> y;
        for (ll i = 1; i <= n; i++)
        {
            /* code */ for (ll j = 1; j <= n; j++)
            {
                /* code */ a[i][j] = '.';
            }
        }
        for (ll l = 2; l <= n * 2; l++)
        {
            /* code */ if (abs(x + y - l) % k == 0)
            {
                for (ll i = 1; i <= n; i++)
                {
                    /* code */ for (ll j = 1; j <= n; j++)
                    {
                        /* code */ if ((i + j) == l)
                        {
                            a[i][j] = 'X';
                        }
                    }
                }
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            /* code */ for (ll j = 1; j <= n; j++)
            {
                /* code */ cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}