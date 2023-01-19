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
        vector<int> v(n);
        map<int, char> mp1;
        string s; // cin>>s;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        // string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (mp1.find(v[i]) != mp1.end() && s[i] != mp1[v[i]])
            {
                flag = true;
                break;
            }
            /* code */ mp1.insert({v[i], s[i]});
        }
        /*for (auto it : mp)
        {
            int p = it.first;
            int q = it.second;
            if (mp.find(p) == mp.end())
            {
                // flag = true;
                // flag true;
                flag = true;
            }
            else if (mp.find(p) != mp.end())
            {
                if (mp[p] == q)
                    // cout << "yes" << endl;
                    // else
                    //    cout << "no" << endl;
                    flag = false;
                else
                {
                    flag = true;
                    break;
                }
            }
        }*/
        /*if (flag)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }*/
        if (!flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}