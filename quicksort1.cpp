#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int abraca_dabra, abraca_dabra1;
        cin >> abraca_dabra >> abraca_dabra1;
        vector<int> vect(abraca_dabra);
        for (int i = 0; i < abraca_dabra; i = i + 1)
        {
            /* code */ cin >> vect[i];
        }
        int abraca_dabra4 = 0, abraca_dabra5 = 1;
        for (auto abraca_dabra3 : vect)
        {
            /* code */ if (abraca_dabra3 == abraca_dabra5)
            {
                abraca_dabra5++;
                abraca_dabra4++;
            }
        }
        ll answer = abraca_dabra - abraca_dabra4;

        ll p = answer % abraca_dabra1;
        if (p == 0)
        {
            cout << answer / abraca_dabra1 << endl;
        }
        else
        {
            cout << answer / abraca_dabra1 + 1 << endl;
        }
    }
}