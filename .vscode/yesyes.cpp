#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ string str;
        cin >> str;
        string stri = "";
        for (int i = 0; i < 20; i++)
        {
            /* code */ stri += "Yes";
        }
        if (stri.find(str) != string::npos)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}