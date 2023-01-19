#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int j = 0;
    int t;
    cin >> t;

    int ans = 0;

    while (t--)

    {

        int n;
        int k;
        cin >> n >> k;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> v1;

        for (int i = 1; i <= k; i++)
        {
            v1.push_back(i);
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = i; j <= i; j++)
            {
                if (v1[i] != v[j])
                {

                    ans++;
                }
            }
        }
        cout << ans << endl;
        ans = 0;
    }

    return 0;
}
