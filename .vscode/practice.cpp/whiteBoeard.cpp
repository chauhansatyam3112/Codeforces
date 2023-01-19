#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    // int n = 3;
    // // float p = float(n) / 2 - n / 2;
    // cout << p;
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ int n, temp;
        cin >> n;
        temp = n;

        vector<int> v(n);
        pair<int, int> p[n - 1];

        int i = 0;
    

        for (i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }

        i = 0;

        while (v.size() > 1)
        {
            temp = v.size();

            int k = v[temp - 2] + v[temp - 1];

            p[i].first = v[temp - 2];
            p[i].second = v[temp - 1];

            i++;

            v.pop_back();
            v.pop_back();
            if (k % 2 == 0)
            {
                v.push_back(k / 2);
            }
            else
            {
                v.push_back((k / 2) + 1);
            }
        }

        cout << v[0] << endl;

        for (int i = 0; i < n - 1; i++)
            cout << p[i].first << ' ' << p[i].second << endl;
    }
}