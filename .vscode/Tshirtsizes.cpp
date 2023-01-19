#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

void solve()

{

    /* code */ string a, b;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();

    if (a.back() == 'M' && b.back() == 'L')
    {
        cout << '<' << endl;
        // return;
    }
    else if (a.back() == 'L' && b.back() == 'M')
    {
        cout << '>' << endl;
        // return;
    }

    else if (a.back() == 'S' && b.back() == 'M')
    {
        cout << '<' << endl;
        // return;
    }
    else if (a.back() == 'M' && b.back() == 'S')
    {
        cout << '>' << endl;
        // return;
    }
    if (a.back() == 'S' && b.back() == 'L')
    {
        cout << '<' << endl;
        // return;
    }
    else if (a.back() == 'L' && b.back() == 'S')
    {
        cout << '>' << endl;
        // return;
    }
    if (m == 1 && n == 1)
    {
        if (a.back() == 'S' && b.back() == 'S' || a.back() == 'M' && b.back() == 'M' || a.back() == 'L' && b.back() == 'L')
        {
            cout << '=' << endl;
            // return;
        }
    }
    else
    {
        if (a.back() == 'S' || b.back() == 'S')
        {
            if (a.back() == 'S')
            {
                for (int i = n - 2; i >= 0; i--)
                {
                    // if (a.back() == 'S')
                    // {
                    if (a[i] == 'X')
                        cnt1++;
                    //}
                }
            }
            if (b.back() == 'S')
            {
                for (int i = m - 2; i >= 0; i--)
                {
                    //  if (b.back() == 'S')
                    //{
                    if (b[i] == 'X')
                        cnt2++;
                    //  }
                }
            }
            if (cnt1 > cnt2)
            {
                cout << '<' << endl;
                return;
            }
            else if (cnt1 < cnt2)
            {
                cout << '>' << endl;
                return;
            }
            else if (cnt1 == cnt2)
            {
                cout << '=' << endl;
                return;
            }
        }

        if (a.back() == 'L')
        {
            for (int i = n - 1; i >= 0; i--)
            {

                if (a[i] == 'X')
                    cnt3++;
            }
        }
        if (b.back() == 'L')
        {
            for (int i = m - 2; i >= 0; i--)
            {
                // if (b.back() == 'L')

                if (b[i] == 'X')
                    cnt4++;
            }
        }
        if (cnt3 > cnt4)
        {
            cout << '>' << endl;
            return;
        }
        else if (cnt3 < cnt4)
        {
            cout << '<' << endl;
            return;
        }
        else if (cnt3 == cnt4)

         {
             cout << '=' << endl;
             return;
         }
    }
    // return;
}

int main()
{
    ll t = 1;

    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}