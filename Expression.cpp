#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t = a + b + c;
    int m = a + b * c;
    int n = a * (b + c);
    int p = a * b * c;
    int s = (a + b) * c;
    vector<int> v;
    v.push_back(m);
    v.push_back(n);
    int r;
    v.push_back(p);
    v.push_back(s);
    v.push_back(t);
    for (int i = 0; i < 4; i++)
    {
        r = *max_element(v.begin(), v.end());
    }
    cout << r;
}