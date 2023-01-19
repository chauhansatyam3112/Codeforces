#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    ll t;
    cin >> t;

    //     /* code */ ll n;
    //     cin >> n;
    //     bool flag = false;
    //     int i = 1, j = 1;
    //     if (n <= 21 && n > 14)
    //     {
    //         int k = 0;
    //         while (k <= 6)
    //         {
    //             if (n == (19 - k))
    //             {
    //                 flag = true;
    //             }
    //             k++;
    //         }
    //     }

    //     while (i <= n)
    //     {
    //         ll p = 19 + 16 * i;

    //         while (j <= 6)
    //         {

    //             if (n == (p - j))
    //             {

    //                 flag = true;
    //                 break;
    //             }
    //             j++;
    //         }
    //         if (flag)
    //         {
    //             break;
    //         }
    //         i++;
    //     }
    //     if (flag)
    //     {
    //         cout << "YES" << endl;
    //     }
    //     if (!flag)
    //         cout << "NO" << endl;
    // }
    // return 0;

    while (t--)
    {
        long long int n;
        cin >> n;
        if (n > 6 && n % 14 >= 1 && n % 14 <= 6)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}