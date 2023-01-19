#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int a[100005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        /* code */ int n;
        cin >> n; // vector<int>v(n);
        for (int i = 1; i <= n; i++)
        {
            /* code */ cin >> a[i];
            if (a[i] < 0)
            {
                a[i] -= a[i];
                cnt++;
            }
        }
        for (int i = 1; i <= cnt; i++)
        {
            /* code */ a[i] -= a[i];
        }
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            /* code */ if (a[i] > a[i + 1])
            {
                flag = true;
            }
        }
        if (flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}