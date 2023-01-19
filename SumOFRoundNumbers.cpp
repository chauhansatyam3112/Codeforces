#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        vector<int> v;
        int power = 1;
        /*string p = to_string(n);
        for (int i = 0; i < p.size(); i++)
        {
            int q = p.size() - 1;
            if (p[i] == '0')
                continue;
            int r = int(int(p[i]) * pow(10, (q - i)));
            v.push_back(r);
        }*/
        while (n > 0)
        {
            /* code */ if (n % 10 > 0)
            {
                v.push_back(n % 10 * power);
            }
            n = n / 10;
            power *= 10;
        }
        cout << v.size() << endl;

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}