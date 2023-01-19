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
        /* code */ int n;
        cin >> n;
        string str;
        cin >> str;
        ll answer = 0;
        vector<int> vec(10);
        for (int hello = 0; hello < n; hello += 1)
        {
            // vector<int>vec(10);
            /* code */ int difference = 0;
            int p = min(hello + 228, n);
            for (int hey = hello; hey < p; hey += 1)
            {
                /* code */ int previous = str[hey] - '0';
                if (vec[previous] == 0)
                {
                    difference++;
                }
                vec[previous] += 1;
                if (*max_element(vec.begin(), vec.end()) <= difference)
                    answer += 1;
            }
        }
        cout << answer << endl;
    }
}