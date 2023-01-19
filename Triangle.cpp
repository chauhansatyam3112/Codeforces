#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // bool temp = false;
        vector<int> v(6);

        /* code */ // int apple, apple1, apple2, apple3, apple4, apple5;

        for (int i = 0; i < 6; i++)

            /* code */ cin >> v[i];

        // cin >> v[i];
        if (v[0] != v[1] && v[1] != v[2] && v[1] != v[3])

            // temp = true;
            cout << "YES" << endl;

        else if (v[0] != v[2] && v[0] != v[4] && v[2] != v[4])

            // temp = true;
            cout << "YES" << endl;

        else

            cout << "No" << endl;
    }
}