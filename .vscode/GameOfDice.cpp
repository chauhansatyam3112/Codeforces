#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int a, b;
    cin >> a >> b;
    int p1 = 0, d1 = 0, p2 = 0;
    for (int i = 1; i <= 6; i++)
    {
        /* code */ int t, p;
        t = abs(a - i);
        p = abs(b - i);
        if (t > p)
        {
            p1++;
        }
        else if (p > t)
        {
            p2++;
        }
        else
        {
            d1++;
        }
    }
    cout << p1 << " " << d1 << " " << p2;
}