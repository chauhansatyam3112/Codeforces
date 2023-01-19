#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        // int arr[n];
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // int tmp[1001];
        vector<int> tmp(1001);

        for (int i = 0; i < n; i++)
        {

            // tmp[arr[i]].push_back(i);
            tmp.insert(tmp.begin() + arr[i], i);
        }

        int cl = -1;

        for (int j = 1; j <= n; j++)
        {

            if (tmp[j].size())
            {

                bool is = false;

                int cal = 0;

                for (int l = 1; l <= n; l++)
                {

                    if (tmp[l].size() && __gcd(j, l) == 1)
                    {

                        is = true;

                        int lst = tmp[j][tmp[j].size() - 1] + 1;

                        int lst2 = tmp[j][tmp[j].size() - 1] + 1;

                        cal = max(cal, lst + lst2);
                    }
                }

                if (is)
                {

                    cl = max(cal, cl);
                }
            }
        }

        cout << cl << endl;
    }
}
