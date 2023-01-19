#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*string s, s1;
    int i;
    cin >> s;
    for (i = 0; i < s.size();)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            s1 += " ";
            i += 3;
        }
        else
        {
            s1 += s[i];
            i++;
        }
    }
    cout << (s1);
    return 0;*/
    string s;
    cin >> s;
    int n = s.size();
    if (n <= 3)
    {
        cout << s;
    }
    vector<string> ans;
    string t = "";
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            ans.push_back(t);
            t = "";
        }
        else
        {
            t.push_back(s[i]);
        }
    }
    if (t.size() > 0)
    {
        ans.push_back(t);
    }
    for (auto &it : ans)
    {
        /* code */ if (it.size() > 0)
        {
            cout << it << "";
        }
    }
}