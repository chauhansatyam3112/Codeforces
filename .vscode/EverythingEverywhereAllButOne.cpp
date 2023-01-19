#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ ll n;
        cin >> n;
        bool flag = false;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v[i];
        }
        // float mean = 0;
        float sum = 0;

        for (int i = 0; i < v.size(); i++)
        {
            sum = 0;
            for (int j = 0; j < v.size(); j++)
            {
                /* code */ if (j != i)
                {
                    sum += v[j];
                }
            }
            // mean =(sum) / (n - 1);

            if (v[i] == (sum / n - 1))
            {
                // cout << "yes" << endl;
                // return 0;
                flag = true;
                break;
            }
        }
        // if(flag)

        if (flag == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}