#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int t;
    cin >> t;
    int ans;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "3" << endl;
            continue;
        }
        if (n != 1 && __builtin_popcount(n) == 1)
        {
            cout << (n + 1) << endl;
        }
        else
        {
            ans = 1;
            for (int i = 0; i < 32; i++)
            {
                if (n & (1 << i))
                {
                    ans = (1 << i);
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}