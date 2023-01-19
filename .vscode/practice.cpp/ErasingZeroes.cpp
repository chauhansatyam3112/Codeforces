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
        /* code */ string s;
        cin >> s;
        int n = s.size();
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            /* code */ if (s[i] == '1')
            {
                j = i;
                break;
            }
        }
        int m = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            /* code */ if (s[i] == '1')
            {
                m = i;
                break;
            }
        }
        int ans = 0;
        for (int k = j; k < s.length() && k < m; k++)
        {
            if (s[k] == '0')
                ans++;
            if (s[k] == '1')
                continue;
        }
        if (s.length() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}