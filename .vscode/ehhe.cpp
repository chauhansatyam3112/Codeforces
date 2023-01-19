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
        /* code */ ll hello_world;
        cin >> hello_world;
        vector<ll> vec;
        for (int hello = 0; hello < hello_world; hello++)
        {
            /* code */ ll x;
            cin >> x;
            vec.push_back(x);
        }
        set<ll> seti;
        for (auto it : vec)
        {
            seti.insert(it);
        }
        if (seti.size() > 2)
        {
            cout << hello_world << endl;
        }
        else if (seti.size() == 1)
        {
            cout << 1 << endl;
        }
        else
            cout << (2 + (hello_world - 2) / 2) << endl;
    }
    return 0;
}