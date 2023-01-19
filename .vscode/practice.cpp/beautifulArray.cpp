#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    ll t;
    cin >> t;
    int m, n, sm, la;
    while (t--)
    {
        cin >> n;
        m = n * n;
        sm = 1;
        la = m;

        ll ans[n + 1][n + 1];

        c = 1;
        for (int i = 1; i <= n; i++)
        {
            if ((i % 2) == 1)
            {
                for (int j = 1; j <= n; j++)
                {
                    if ((c % 2) == 1)
                    {
                        ans[i][j] = sm;
                        sm++;
                    }
                    else
                    {
                        ans[i][j] = la;
                        la--;
                    }
                    c++;
                }
            }
            else
            {
                for (int j = n; j >= 1; j--)
                {
                    if ((c % 2) == 1)
                    {
                        ans[i][j] = sm;
                        sm++;
                    }
                    else
                    {
                        ans[i][j] = la;
                        la--;
                    }
                    c++;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}