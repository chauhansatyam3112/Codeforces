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
        bool flag = false;
        bool flag1 = false;
        bool flag2 = false;
        bool flag3 = false;
        set<int> s;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> vec[i];
            s.insert(vec[i]);
        }
        if (n == 2 && vec[0] == vec[1])
        {
            cout << "NO" << endl;
            // return 0;
            // flag1 = true;
        }
        else if (n == 1)
        {
            // flag = true;
            cout << "YES" << endl;
            // return 0;
        }

        // s.insert(vec.begin(), vec.end());
        else if (s.size() == 1)
        {
            // flag2 = true;
            cout << "NO" << endl;
            // return 0;
        }

        else
        {

            sort(vec.begin(), vec.end());
            reverse(vec.begin(), vec.end());
            if (vec[0] == vec[1])
            {
                swap(vec[1], vec[n - 1]);
            }
            cout << "YES" << endl;
            for (auto it : vec)
            {
                /* code */ cout << it << " ";
            }
            cout << endl;
            // return 0;
        }

        // if (flag1 == true)
        // {
        //     cout << "NO" << endl;
        // }
        // if (flag2 == true)
        // {
        //     cout << "NO" << endl;
        // }
        // if (flag == true)
        // {
        //     cout << "YES" << endl;
        // }
        // if (flag3 == true)
        // {
        //     cout << "YES" << endl;
        //     for (auto it : vec)
        //     {
        //         /* code */ cout << it << " ";
        //     }
        //     cout << endl;
        // }
    }
}
