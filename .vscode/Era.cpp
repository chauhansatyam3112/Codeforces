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
        /* code */ ll n;
        cin >> n;
        vector<int> v(n), v1;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] > (i + 1))
            {
                /* code */ int maxi = abs(v[i] - (i + 1));
                v1.push_back(maxi);
            }
            else
            {
                v1.push_back(0);
            }
        }
        int p = *max_element(v1.begin(), v1.end());
        cout << p << endl;
    }
}