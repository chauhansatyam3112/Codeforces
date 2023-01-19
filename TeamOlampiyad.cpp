#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{

    int n;
    cin >> n;
    vector<int> a, b, c;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            a.push_back(i + 1);
        }
        else if (x == 2)
        {
            b.push_back(i + 1);
        }
        else
        {
            c.push_back(i + 1);
        }
    }

    int x = a.size();
    int y = b.size();
    int z = c.size();

    int ans = min(x, y);
    ans = min(ans, z);

    if (ans == 0)
    {
        cout << ans;
    }
    else
    {
        cout << ans << endl;
        for (int i = 0; i < ans; i++)
        {
            cout << a[i] << " " << b[i] << " " << c[i] << endl;
        }
    }
}
