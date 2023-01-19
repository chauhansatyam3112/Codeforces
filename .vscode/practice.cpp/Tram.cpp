#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    int n;
    cin >> n;
    int a, b;
    int ans = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (i == 0)
        {

            ans = b;
        }

        int ans1 = (ans - a) + b;
        maxi = max(maxi, ans1);
        }
    cout << maxi << endl;
}