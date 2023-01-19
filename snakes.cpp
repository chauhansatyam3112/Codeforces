#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll n, m;
    cin >> n >> m;
    int t = m - 1;
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i % 2 != 0)
            {

                /* code */ cout << "#";
            }
            else if ((i / 2) % 2 != 0)
            {
                if (j == m)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else if ((i / 2) % 2 == 0)
            {
                if (j == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
}