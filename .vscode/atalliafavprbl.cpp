#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll n;
        cin >> n;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        ll ans = 0;
        // char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        int x = int(str[n - 1] - 'a');
        // ll p = arr[x - 'a'];

        // ll ans = str[n - 1] + 'a';
        cout << x + 1 << endl;
    }
}