
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, x, y;
        cin >> n >> x >> y;

        if ((x == 0 && y == 0) || (x != 0 && y != 0))
        {
            cout << -1 << endl;
            return 0;
        }

        if (x < y)
            swap(x, y);

        if ((n - 1) % x == 0)
        {
            int q = 1;
            y = 0;

            for (int i = 0; i < n - 1; i++)
            {
                if (x == y)
                {
                    y = 0;
                    q = i + 2;
                }
                y++;
                cout << q << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
}