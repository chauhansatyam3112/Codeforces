#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
//#define for(int i=0;i<n;i++) fo(i,0,n)

int main()
{
    ll no_of_even;
    ll no_of_odd;
    ll n;
    cin >> n;
    vector<int> s;
    int k;
    cin >> k;
    for (int i = 1; i <= n; i++)
    {
        /* code */ if (i % 2 != 0)
        {
            s.push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        /* code */ if (i % 2 == 0)
        {
            s.push_back(i);
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (i == (k - 1))
        {
            cout << s[i];
        }
    }
}