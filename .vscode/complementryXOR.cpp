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
        int n;
        cin >> n;
        vector<char> character(n);
        vector<vector<int>> operation;
        for (int hello = 0; hello < n; hello++)
        {
            cin >> character[hello];
        }

        // char character1[n];
        vector<char> character1(n);
        for (int i = 0; i < n; i += 1)
            cin >> character1[i];
        int dp[n];
        for (int i = 0; i < n; i += 1)
            dp[i] = 0;
        // vector<vector<int>> operation;
        operation.push_back({});
        operation.push_back({});
        for (int i = 0; i < n; i += 1)
        {
            int struc = i;
            while (i < n && character[i] == '1')
                i += 1;
            if (struc != i)
            {
                operation[0].push_back(struc + 1);
                operation[1].push_back(i);
                dp[0] += 1;
                dp[struc] -= 1;
                dp[i] += 1;
            }
        }

        int pointer = 0, x0r = 0;

        char ans[n];
        for (int i = 0; i < n; i += 1)
        {
            x0r = x0r + dp[i];
            int p = x0r % 2;
            if ((character1[i] == '0' && p == 1) || (character1[i] == '1' && p == 0))
            {
                ans[i] = '1';
            }
            else
                ans[i] = '0';
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (ans[i] != ans[i + 1])
            {
                pointer = 1;
            }
        }
        if (pointer == 0)
        {
            cout << "YES" << endl;
            if (ans[0] == '1')
            {
                operation[0].push_back(1);
                operation[1].push_back(n);
                operation[0].push_back(1);
                operation[1].push_back(1);
                operation[0].push_back(2);
                operation[1].push_back(n);
            }
            cout << operation[0].size() << endl;
            for (int i = 0; i < operation[0].size(); i += 1)
                cout << operation[0][i] << " " << operation[1][i] << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}