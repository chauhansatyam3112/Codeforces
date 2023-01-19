#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int32_t1 main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        int p = 0;
        if (n % 2 != 0 || n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                /* code */ int x;
                cin >> x;
                if (x % 2 == 0)
                {
                    continue;
                }
                else
                {
                    p = i;
                    break;
                }
            }
            cout << p << endl;
        }
    }
}