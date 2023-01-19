#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        string str;
        cin >> str;
        /*int ans = 0;
        int j = 0;
        int p = 0, q = 0;
        char take;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(str[i]);
        }
        if (st.size() == 1)
        {
            for (auto it : st)
            {
                if (it == '1')
                {
                    cout << n * 2 << endl;
                }
                else
                {
                    cout << n << endl;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == '0' || str[i] == '1')
                {
                    j = i;
                    p = 1;
                    take = str[i];

                    break; // continue;
                }
            }
            int m = 0;
            for (int k = n - 1; k >= 0; k--)
            {
                if ((str[k] == '1' && take == '0') || (str[k] == '0' && take == '1'))
                {
                    m = k;
                    q = 1;
                    break;
                }
            }
            if (p == 1 && q == 1)
            {
                int len = abs(m - j) + 1;
                cout << len * 2 << endl;
                // return 0;
            }
            // else if (j == 0 && p == 0)
            // {
            //     cout << n * 2 << endl; // return 0;
            // }
            // else if (m == 0 && q == 0)
            // {
            //     cout << n << endl;
            // }
        }*/
        int maxi = 0;

        maxi = n;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '0')
                continue;

            //	cout<<i+1<<" "<<n-i<<" "<<max1<<"\n";

            maxi = max(maxi, 2 * (max(i + 1, n - i)));
        }

        cout << maxi << "\n";
    }
    
    to_string(int (n));
}