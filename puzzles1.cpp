#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[m];
    int min1 = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    for (int i = 0; i <= m - n; i++)
    {
        min1 = min(min1, abs(a[i] - a[i + n - 1]));
    }
    cout << min1;
}