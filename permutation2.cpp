#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans = 0;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < k; i++)
        {
            if (v[i] > k)
                ans++;
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}