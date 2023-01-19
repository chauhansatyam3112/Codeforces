#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
#define pp pair<ll, ll>

int main()
{
    long n, x, a, b, time = 0, length;
    vector<pair<long, long>> v;
    cin >> n >> x;
    while (n--)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    length = b;
    long init = 1;
    vector<pair<long, long>>::iterator it;
    it = v.begin();
    while (init <= length && it != v.end())
    {
        if ((init + x) <= it->first)
        {
            init += x;
        }
        else
        {
            time += (it->second - init) + 1;
            init = it->second + 1;
            it++;
        }

        // cout << "# " << init << " -> " << time << endl;
    }

    cout << time << "\n";
    return 0;
    /*ll i, j, k;
    ll n, x;
    ll s, e, count = 0;

    cin >> n >> x;
    pp a[n];

    for (i = 0; i < n; i++)
    {
        cin >> s >> e;
        a[i] = make_pair(s, e);
    }

    ll ag = 1;
    for (i = 0; i < n; i++)
    {
        while (ag + x <= a[i].first)
            ag += x;

        count += a[i].second - ag + 1;
        ag = a[i].second + 1;
    }

    cout << count;

    return 0;*/
}
