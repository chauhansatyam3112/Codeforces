#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

void solve()
{

    /* code */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> arr[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n - 2; i++)
    {
        /* code */ if (__gcd(arr[i], arr[i + 2]) > (__gcd(arr[i], arr[i + 1])))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    // ios_base::sync_with_stdio(false)
    int t = 1;
    cin >> t;
    while (t--)
    {
        /* code */ solve();
    }
}