#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll n, p;
    cin >> n >> p;
    ll a, b;
    ll arr[n];
    set<int> s;
    int ans = 0;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ll arr[a];

        for (int j = 0; j < a; j++)
        {
            /* code */
            cin >> arr[j];
        }
        // for (int k = 0; k < a; k++)
        // {
        sort(arr, arr + a);
        if (arr[0] < p)
        {
            s.insert(i + 1);
            ans++;
            //}
            // else
            // {
            //   continue;
            //}
        }
    }
    cout << ans << endl;

    // for (auto it : s)
    //{
    //  s.insert(v1.begin(), v1.end());
    //}

    // if (s.size() == 0)
    //{
    //   cout << 0 << endl;
    //}
    for (auto it : s)
    {
        cout << it << " ";
    }
}