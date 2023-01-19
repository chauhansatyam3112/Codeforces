#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
bool isPalindrome(string s)
{
    string P = s;
    reverse(s.begin(), s.end());
    if (s == P)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (!isPalindrome(s))
        {
            if (k == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }
}