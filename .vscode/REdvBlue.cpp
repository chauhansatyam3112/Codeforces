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
        /* code */ int n, r, b;
        cin >> n >> r >> b;
        string ans;
        int mina = r / b + 1;
        int cnt = (r % (b + 1));
        for (int i = 0; i < (b + 1 - cnt); i++)
        {
            /* code */ string ss(mina, 'R');
            ans += ss;
            ans += 'B';
        }
        for (int i = 0; i < cnt; i++)
        {
            /* code */ string ss(mina + 1, 'R');
            ans += ss;
            ans += 'B';
        }
        ans.pop_back();
        cout << ans;
    }
}