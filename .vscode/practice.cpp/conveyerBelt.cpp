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
        /* code */ int n, m;
        cin >> n >> m;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            /* code */ for (int j = 1; j <= m; j++)
            {
                /* code */ char x;
                cin >> x;
                if (x == 'C')
                    continue;
                if (i == n && x == 'D')
                    cnt++;
                if (j == m && x == 'R')
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}