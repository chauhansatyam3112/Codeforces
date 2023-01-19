#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
/*bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}*/

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */ int temp;
            cin >> temp;
            if (temp == 0)
                zero++;
            if (temp == 1)
                one++;
            v[i].first = temp;
        }
        vector<ll> a(zero), b(one);
        int y = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */ int temp;
            cin >> temp;
            v[i].second = temp;
            if (v[i].first == 0)
            {
                a[y] = v[i].second;
                y++;
            }
            else
                b[x] = v[i].second;
            x++;
        }
        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end(), greater<ll>());
        int sum = 0;
        for (auto x : a)
        {
            /* code */ sum += x;
        }
        for (auto x : b)
        {
            /* code */ sum += x;
        }
        if (zero == one)
        {
            sum = 2 * sum;
            sum = sum - min(a[zero - 1], b[one - 1]);
            cout << sum << endl;
        }
        else
        {
            int mini = min(zero, one);
            for (int i = 0; i < mini; i++)
            {
                /* code */ sum += a[i] + b[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}