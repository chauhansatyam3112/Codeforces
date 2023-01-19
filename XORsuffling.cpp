#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bit_xor = 0;
        /* code */ int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    /* code */ bit_xor = bit_xor ^ v[j];
            }
            if (bit_xor ^ v[i] == 0)
            {
                cout << v[i] << endl;
                break;
            }

            // cout << v[i];
            // return 0;
        }
    }
}