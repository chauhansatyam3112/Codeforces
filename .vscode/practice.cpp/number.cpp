#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    int n, m;
    int res = -1;
    cin >> n >> m;
    if (m % n == 0)
    {
        res = 0;
        int d = m / n;
        while (d % 2 == 0)
        {
            /* code */ d /= 2;
            res++;
        }
        while (d % 3 == 0)
        {
            /* code */ d /= 3;
            res++;
        }
        if (d != 1)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << res << endl;
}