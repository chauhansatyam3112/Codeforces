#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> v;
    int currdiff = 0, maxdiff = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */ int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 1; i < n; i++)
    {
        /* code */ if (v[i] < v[i - 1])
        {
            currdiff = v[i - 1] - v[i];
            maxdiff = max(currdiff, maxdiff);
        }
        // else
        //{
        //  maxdiff = 0;
        //}
    }
    int t = (maxdiff - c);
    cout << (t > 0 ? t : 0) << endl;
}