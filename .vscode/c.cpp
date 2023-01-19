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
        string s;
        cin >> s;
        int p = s.size();
        reverse(s.begin(), s.end());
        int m = 57;
        int last[10] = {0};
        for (char it : s)
        {
            /* code */ if (it <= char(m))
            {
                last[it - '0']++;
                m = it;
            }
            else
            {
                if (it != '9')
                {
                    last[it - '0' + 1]++;
                }
                else
                {
                    last[10 - 1]++;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            /* code */ while (last[i]--)
            {
                /* code */ cout << i;
            }
        }
        cout << endl;
    }
}