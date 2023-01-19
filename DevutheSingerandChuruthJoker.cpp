#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
#define cin(a) cin >> a
#define couts(a) cout << a

int main()
{
    /* ll sum = 0;
     ll n, d;
     cin >> n >> d;
     vector<int> v;
     ll t = (n - 1) * 10 + 5;
     ll no_of_songs = (((n - 1) * 10) + 5) / 5;
     if (t > d)
     {
         cout << "-1" << endl;
     }
     else
     {
         cout << no_of_songs << endl;
     }

     // for (int i = 0; i <n; i++)
     //  {
     //    /* code */
    
    //  v.push_back(x);
    //}*/
    ll n, d;

    ll i, sum = 0, t;
    cin(n);
    cin(d);
    for (i = 0; i < n; i++)
    {
        cin(t);
        sum += t;
    }
    sum += 10 * (n - 1);
    if (d < sum)
    {
        cout << "-1";
        return 0;
    }
    cout << ((n - 1) * 2 + (d - sum) / 5);
    return 0;
}
