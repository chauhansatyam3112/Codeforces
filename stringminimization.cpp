#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n, m;
        vector<char> v3, v4;
        cin >> n >> m;
        vector<int> v1;
        string S = "0";
        for (int i = 0; i < m; i++)
        {
            S += 'B';
        }
        for (int i = 0; i < n; i++)
        {
            /* code */ int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x = v1[i];
            int y = m + 1 - v1[i];
            if (x < y)
            {
                if (S[x] == 'A')
                {
                    S[y] = 'B';
                }
                else
                {
                    S[x] = 'A';
                }
            }
            else
            {
                if (S[y] == 'A')
                {
                    S[x] = 'A';
                }
                else
                {
                    S[y] = 'A';
                }
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cout << S[i];
        }
        cout << endl;
    }
}
