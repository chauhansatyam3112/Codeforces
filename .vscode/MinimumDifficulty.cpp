#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int currmaxi = 0, maxi = 0;
    int p;
    int min1 = INT_MIN;
    int min2 = INT_MIN;
    int currmaxi2 = 0;
    vector<int> v1;
    int n;
    cin >> n;
    vector<int> v;
    vector<int> v3;
    for (int i = 0; i < n; i++)
    {

        /* code */ int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 1; i < n - 1; ++i)
    {
        /* code */
        v3.clear();
        min2 = INT_MIN;
        currmaxi2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            v3.push_back(v[j]);
        }
        for (int k = 1; k < v3.size(); k++)
        {
            currmaxi2 = v3[k] - v3[k - 1];
            min2 = max(currmaxi2, min2);
        }
        v1.push_back(min2);
    }
    for (auto it : v1)
    {
        p = *min_element(v1.begin(), v1.end());
    }
    cout << p;
}