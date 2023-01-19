#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll n, m;cin >> n >> m;
    if (m > n)
    {
        cout << "-1" << endl;
        return 0;
       // __gcd(*min_element(begin(n),end(n)),*max_element(begin(n),end(n)));
       
    }
    
    ll t = n / 2;

    while (((n - (t * 2)) + t) % m != 0)
    {
        t--;
        if (t == 0 && ((n - (t * 2)) + t) % m == 0)
        {
            cout << ((n - (t * 2)) + t) << endl;
            return 0;
        }
        else if (t == 0 && ((n - (t * 2)) + t) % m != 0)
        {
            cout << "-1";
            return 0;
        }
    }

    cout << ((n - (t * 2)) + t) << endl;
}