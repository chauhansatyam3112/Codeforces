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
        /* code */ ll n, k;
        cin >> n >> k;
        vector<priority_queue<ll>> v(k);
        for (int i = 0; i < n; i++)
        {
            /* code */ ll temp;
            cin >> temp;
            v[i % k].push(temp);
        }
        ll sum = 0;
        for (auto it : v)
        {
            sum += it.top();
        }
        cout << sum << endl;
        
    }
}