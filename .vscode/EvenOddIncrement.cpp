

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll apple, ball;
        cin >> apple >> ball;
        ll answer = 0;
        vector<ll> v(apple);
        ll odd = 0, even = 0;
        for (ll i = 0; i < apple; i++)
        {
            cin >> v[i];
            answer = answer + v[i];
            if (v[i] % 2 == 0)

                even++;

            else

                odd++;
        }

        while (ball--)
        {
            ll hello, vhello;
            cin >> hello >> vhello;
            if (hello == 0)
            {
                answer += (vhello * even);
                if (vhello % 2 != 0)
                {
                    odd = odd + even;
                    even = 0;
                }
            }
            else
            {
                ll T = vhello * odd;
                answer += (T);
                if (vhello % 2 != 0)
                {
                    even += odd;
                    odd = 0;
                }
            }
            cout << answer << endl;
        }
    }
}
