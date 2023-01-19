#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int abra_cadabra;
        cin >> abra_cadabra;
        vector<int> vec(abra_cadabra);
        for (int i = 0; i < abra_cadabra; i++)
        {
            /* code */ cin >> vec[i];
        }
        int abra_cadabra1 = vec[0];
        int abra_cadabra2 = vec[0];
        for (int abracadabra3 = 1; abracadabra3 < abra_cadabra; abracadabra3 = abracadabra3 + 1)
        {
            /* code */ abra_cadabra1 = abra_cadabra1 | vec[abracadabra3];
            abra_cadabra2 = abra_cadabra2 & vec[abracadabra3];
        }
        int p = abra_cadabra1 - abra_cadabra2;
        cout << p << endl;
    }
}