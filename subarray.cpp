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
        /* code */
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            /* code */ int x;
            cin >> x;
            v.push_back(x);
        }
        int p = *max_element(v.begin(), v.end());
        int q = *min_element(v.begin(), v.end());

        int m = p * p;
        int u = q * q;1
        
        int r = p * q;
        int mini = min(m, u);
        int maxi = max(r, m);
        cout << mini << " " << maxi << endl;
    }
}