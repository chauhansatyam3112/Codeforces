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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % a[0] != 0)
            {
                ok = false;
                break;
            }
        }
        ok == true ? cout << "YES\n" : cout << "NO\n";
    }
}
