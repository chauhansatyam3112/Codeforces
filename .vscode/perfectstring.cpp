#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ string s;
        cin >> s;
        int n = s.length();

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */ ans += s[i] - 'a' + 1;
        }

        if (n % 2 == 0)
            cout << "Alice" << ans << endl;

        else
        {

            int ans1;
            if (s[0] < s[n - 1])
                ans1 = s[0] - 'a' + 1;
            else
                ans1 = s[n - 1] - 'a' + 1;
            if (ans > ans1)
                cout << "Alice" << ans - ans1 << endl;
            else if (ans1 > ans)
                cout << "Bob" << ans1 - ans << endl;
            else
                cout << "draw" << endl;
        }
    }
}