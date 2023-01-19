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
        /* code */ int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << "2 1" << endl;
        }
        else if (n == 3)
        {
            cout << -1 << endl;
        }
        else if (n == 4)
        {
            cout << "4 3 2 1" << endl;
        }
        else
        {
            for (int i = n; i > n / 2 + 1; i--)

                /* code */ cout << i;
            for (int i = 1; i <= n / 2; i++)

                /* code */ cout << i;

            cout << endl;
        }
    }
}
