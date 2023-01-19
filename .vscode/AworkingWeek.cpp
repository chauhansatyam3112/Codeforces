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
        /*int d;cin>>d;
        cout<<((d/3)-2)<<endl;*/
        int n;
        cin >> n;
        vector<int> v1(n), v2, v3;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> v1[i];
        }
        int srch = -1, start = -1, last = -1;
        for (int i = 0; i < n; i++)
        {
            /* code */ if (v1[i] != i + 1)
            {
                srch = i + 1;
                start = i;
                break;
            }
        }
        if (srch == -1)
        {
            for (int i = 0; i < n; i++)
            {
                /* code */ cout << v1[i] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                /* code */ if (v1[i] == srch)
                {
                    last = i;
                    break;
                }
            }
            reverse(v1.begin() + start, v1.begin() + last + 1);
            for (int i = 0; i < n; i++)
            {
                /* code */ cout << v1[i] << " ";
            }
        }
        cout << endl;
    }
}
