#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {

            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> v1;
        for (auto it : v)
        {
            v1 = v;
        }

        sort(v.begin(), v.end());
        if (v1 == v || n == k)
        {
            cout << '0' << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
}