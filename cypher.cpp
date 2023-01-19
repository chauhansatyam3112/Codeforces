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
        vector<int> curr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            curr.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int length;
            cin >> length;
            string s;
            cin >> s;
            for (int j = 0; j < length; j++)
            {
                if (s[j] == 'U')
                {
                    if (curr[i] == 0)
                    {
                        curr[i] = 9;
                    }
                }
                else
                {
                    curr[i] -= 1;
                }
            }
        }
        else if (s[j] == 'D')
        {
            curr[i] = (curr[i] + 1) % 10;
        }
    }
}
for (auto &ele : curr)
{
    cout << ele << " ";
}
cout << endl;
