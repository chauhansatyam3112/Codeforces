#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int n, m;
    cin >> n >> m;
    if (m > n)
    {
        cout << -1 << endl;
    }
    else
    {
        int move = 0;
        if (n % 2 != 0)
            move = (n / 2) + 1;
        else
            move = n / 2;
        while (move % m != 0)
        {
            if (move % m == 0)
            {
                break;
            }
            move++;
        }
        cout << move << endl;
    }
}