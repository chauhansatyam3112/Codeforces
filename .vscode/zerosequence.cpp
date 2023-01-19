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
        /* code */ int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        sort(v.begin(), v.end());
        int zero = count(v.begin(), v.end(), 0);
        if (zero > 0)
        {
            cout << (n - zero) << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 1; i < n; i++)
            {
                /* code */ if (v[i] == v[i - 1])
                    flag = true;
            }
            if (flag)
                cout << n << endl;
            else
                cout << n + 1 << endl;
        }
    }
}