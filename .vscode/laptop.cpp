#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll n;
    cin >> n;
    bool flag = true;
    vector<pair<int, int>> v, v1;
    int count = 0, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */ int a, b;
            cin >> a >> b;
            v.push_back({a, b});
            int c, d;
            cin >> c >> d;
            v1.push_back({c, d});
        }
    }

    for (auto it : v)
    {
        if (it.second > it.first)
        {
            count++;
        }
        else
        {
            cnt++;
        }
    }
    if (count >= cnt)
    {
        cout << "Happy Alex" << endl;
    }
    else if (count < cnt)
    {
        cout << "Poor Alex" << endl;
    }
}