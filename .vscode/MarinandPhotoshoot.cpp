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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int j = 0, one = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                j = i;
                break;
            }
        }

        int ans = 0;
        for (int i = j + 1; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (one < 2)
                    ans += (2 - one);
                one = 0;
            }
            else
                one++;
        }

        cout << ans << endl;
    }
    return 0;
}