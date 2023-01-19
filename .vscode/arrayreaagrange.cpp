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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        vector<int> v1;
        for (auto it : v)

        {
            /* code */ v1 = v;
        }
        sort(v1.begin(), v1.end());
        if (v1 == v)
        {
            cout << 0 << endl;
            // return 0;
        }
        else if (v1 != v)
        {

            int j = v.size() - 1;
            int cnt = 0;
            for (int i = 0; i < j;)
            {

                if (v[j] == 1)
                {

                    j--;
                }
                else if (v[i] == 1 && v[j] == 0)
                {
                    cnt++;
                    i++;
                    j--;
                }
                else if (v[i] == 1 && v[j] == 1)
                {
                    i++;
                    j--;
                }
                else if (v[i] == 0 && v[j] == 1)
                {
                    i++;
                }
                else
                {
                    i++;
                }
            }
            cout << cnt << endl;
        }
    }
}