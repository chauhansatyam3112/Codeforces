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
        /* code */ int n;
        cin >> n;
        int v[n], v1[n];
        int cnt0 = 0, cnt1 = 0, count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
            if (v[i] == 1)
                cnt1++;
            else
                cnt0++;
        }
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v1[i];
            if (v1[i] == 1)
                count1++;
            else
                count0++;
        }
        if (count1 == cnt1 && count0 == cnt0)
        {
            int flag = 0;
            for (int i = 0; i < n; i++)

                /* code */ if (v[i] != v1[i])
                {
                    flag = 1;
                    break;
                }
            if (flag)
            {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] != v1[i])
                {
                    count++;
                }
            }
            int mini = abs(count1 - cnt1);
            cout << min(mini + 1, count) << endl;
        }
    }
    return 0;
}