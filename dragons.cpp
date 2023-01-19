#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

using namespace std;
int main()
{
    int n, s;
    cin >> s >> n;
    int dragon_pow, bonus_pow;
    int count = 0;

    vector<pair<int, int>> v;

    int flag = 1;
    for (int i = 0; i < n; i++)
    {

        cin >> dragon_pow >> bonus_pow;
        v.push_back({dragon_pow, bonus_pow});
    }
    sort(v.begin(), v.end());
    int new_pow = s;
    for (int i = 0; i < n; i++)
    {
        if (new_pow > v[i].first)
        {
            new_pow += v[i].second + s;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}