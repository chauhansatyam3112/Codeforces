#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int main()
{
    // abid();

    int n, m;
    cin >> n;

    char v[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }

    set<char> v1, v2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                v1.insert(v[i][j]);
            else
                v2.insert(v[i][j]);
        }
    }
    char a = *(v1.begin());
    char b = *(v2.begin());
    if (v1.size() == 1 && v2.size() == 1 && a != b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}