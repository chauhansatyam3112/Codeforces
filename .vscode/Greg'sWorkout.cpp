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
    int chest = 0, biceps = 0, back = 0;
    unordered_map<string, int> mp;
    vector<int> v, v1, v2, v3;
    int c1 = 0, b1 = 0, b2 = 0;
    int b = 0, b3 = 0, c = 0;
    int p = 0;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < (v.size() / 3) - 1; i++)
    {
        for (int j = 3 * i; j < 3 * k; j)
        {
            /* code */ c += v[j];
            b += v[j + 1];

            b3 += v[j + 2];
            k++;
            break;
        }
        c1 += c;
        b1 += b;
        b2 += b3;
    }
    v1.push_back(c1);
    v1.push_back(b1);
    v1.push_back(b2);
    for (auto it : v)
    {
        p = *max_element(v.begin(), v.end());
    }
    cout << p;
}