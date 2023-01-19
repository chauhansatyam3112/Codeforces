#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum1 = 0;
    //int count1 = 0;
    int count2 = 0;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum1 += v[i];
    }
    sum1 /= 2;
    sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (sum1 < 0)
        {
            break;
        }
        else
        {
            sum1 -= v[i];
            count2++;
        }
    }
    cout << count2;
}