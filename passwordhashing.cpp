#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string password, hash;
        cin >> password >> hash;
        map<char, int> mp, mp1;
        int len = password.length();
        int len1 = hash.length();
        for (int i = 0; i < len; i++)
        {
            mp[password[i]]++;
        }
        bool flag = false;

        for (int i = 0; i < (len1 - len) + 1; i++)
        {
            int j = 0;
            while (j < len)
            {
                mp1[hash[i + j]]++;
                j++;
            }
            if (mp1 == mp)
            {
                flag = true;
                break;
            }
            else
            {
                mp1.clear();
                flag = false;
            }
        }
        if (flag)

            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}