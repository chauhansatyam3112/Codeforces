#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        ll sum = 0;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> array[i];
            sum += array[i];
        }
        cout << abs(sum) << endl;
    }
}