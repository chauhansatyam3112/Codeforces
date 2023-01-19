#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ int helloworld;
        int hello;
        cin >> helloworld;
        cin >> hello;
        int codeforces[hello][2];
        for (int ping = 0; ping < hello; ping++)
        {

            /* code */ cin >> codeforces[ping][0];
            cin >> codeforces[ping][1];
        }

        if (helloworld > hello)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}