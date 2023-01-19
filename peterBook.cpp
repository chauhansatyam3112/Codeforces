#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007
int main()
{
    int n;
    cin >> n;
    vector<int> vec(7);
    for (int i = 0; i < 7; i++)
    {
        /* code */ cin >> vec[i];
    }
    int i = 0;
    while (n > 0)
    {
        /* code */ n -= vec[i];
        if (n <= 0)
            break;
        i++;
        i = i % 7;
    }
    cout << i + 1;
}