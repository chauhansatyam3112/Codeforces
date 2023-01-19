#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    // vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 1});
        // cin >> v[i];
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    //{
    //   v1.push_back(v[v[i]]);
    //}
    for (auto it : v)
    {
        cout << it.second << " ";
    }
}