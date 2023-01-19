#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n, m;
        cin >> n >> m;
        set<int> s;
        if (m == 1)
        {
            cout << "NO" << endl;
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            /* code */ s.insert(x);
        }
        int sum = 0;
        if (s.size() == n)
        {
            for (auto it : s)
            {
                sum += it;
            }
        }

        if (s.find(sum % m) != s.end() || ((sum % m) == sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}