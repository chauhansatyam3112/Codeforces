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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> v[i];
    }
    vector<int> ans;
    int flag = 1;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (v[i] == 0)
        {
            ans.push_back(v[i]);
            continue;
        }
        /* code */ if (abs(v[i]) % 2 == 0)
            ans.push_back(v[i] / 2);

        if (abs(v[i]) % 2 != 0)
        {
            cnt++;

            int q = (v[i] + flag) / 2;

            flag = flag * -1;
        }
    }
    for (auto it : ans)
    {
        cout << it << endl;
    }
}