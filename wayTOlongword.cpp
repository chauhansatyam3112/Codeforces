#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    char a;
    char b;
    int c;
    int t;
    cin >> t;
    string str;

    for (int i = 1; i <= t; i++)
    {
        // int n;
        // cin >> n;

        cin >> str;
        for (int j = 0; j <= i; j++)

            c = (str.length() - 2);

        a = str[0];
        b = str.back();

        if (str.length() <=10)
        {
            cout << str << endl;
            continue;
        }
        cout << a << c << b << endl;
    }
}
