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
        /* code */ ll n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {

            /* code */ string temp = s;
            temp.erase(temp.begin() + i);

            string temp1 = temp;
            reverse(temp.begin(), temp.end());
            if (temp1 == temp)
            {
                count++;
            }
            temp.clear();
            temp1.clear();
        }
        cout << count << endl;
    }
}