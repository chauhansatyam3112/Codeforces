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
        ll n, H;
        cin >> n >> H;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        sort(v.begin(), v.end());

        int i = 1;
        int cnt = 0;
        if (v[n - 1] > H)
            cout << 1 << endl;
        else if (v[n - 1] + v[n - 2] == H)
            cout << 2 << endl;

        else
        {
            while (H > 0)
            {
                H -= v[n - 1];
                if (H > 0)
                    cnt++;
                else if (H < 0)
                {
                    cnt++;
                    break;
                }
                H -= v[n - 2];
                if (H > 0)
                    cnt++;
                else if (H < 0)
                {
                    cnt++;
                    break;
                }
            }
            cout << cnt << endl;
        }
    }
}