#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int main()
{
    int n;
    cin >> n;
    vector<int> v, v1;
    if (n == 1)
    {
        cout << "-" << '1' << endl;
        return 0;
    }
    if (n % 2 != 0)
    {
        cout << "-1" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        // int x;
        // cin >> x;

        /* code */ v.push_back(i);
    }
    // for (auto it : v)
    //{
    //  if (it == '0')
    //{
    //  cout << "-" << '1';
    // return 0;
    //}
    //}
    // if (v.size() > n)
    //{
    //  cout << "-1";
    // return 0;
    //}
    for (int i = 0; i < v.size(); i += 2)
    {
        /* code */ v1.push_back(v[i + 1]);
        v1.push_back(v[i]);
    }
    for (auto it : v1)
    {
        cout << it << " ";
    }
}
