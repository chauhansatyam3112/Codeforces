#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, int> mp;
    for (auto it : str)
    {
        mp[it]++;
    }
    int temp;
    bool flag = false;
    string ans = "";
    for (auto it : mp)
    {
        if (it.second % n != 0)
            flag = true;
        int m = it.second;
        temp = m / n;
        while (temp--)
        {
            /* code */ ans += it.first;
        }
    }
    string ans1 = "";
    while (n--)
    {
        /* code */ ans1 += ans;
    }
    if (flag)
        cout << -1 << endl;
    else
        cout << ans1 << endl;
}