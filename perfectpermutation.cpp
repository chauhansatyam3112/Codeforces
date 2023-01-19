#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    long long int n;
    cin >> t;

    unordered_set<int> s;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;

        for (int j = 1; j <= n; j++)
        {

            for (int k = 1; k <= n; k++)
            {
                if (j % k == 0)
                {
                    s.insert(k);
                }
            }
        }
    }
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {

        unordered_set<int>::iterator itr;
        for (itr = s.begin(); itr != s.end(); itr++)
            cout << (*itr) << " ";
        cout << endl;
    }
}