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
        ll hello_world1;
        ll hello_world2;
        cin >> hello_world >> hello_world1 >> hello_world2;
        if (hello_world == hello_world1)
        {
            if (hello_world1 == hello_world2)
            {
                if (hello_world2 = hello_world)
                {
                    cout << "yes" << endl;
                }
            }
        }
        else if (hello_world - 1 > hello_world1 + hello_world2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}