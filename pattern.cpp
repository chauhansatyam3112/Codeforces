#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            cout << 1 << " ";
            cout << endl;
            continue;
        }

        for (int j = 1; j <= 5; j++)
        {
            int c;
            int k;
            int m = 2;
            k = i;
            // int k;
            if (k != 0)

                for (k; k >= 1; k -= 2)
                {

                    cout << c + 2 << " ";
                    cout << c << " ";

                    c += 2;
                    c += m;
                    k = c;
                }
            // j += i;

            cout << endl;

            // j += 2;
        }
        // c = 1;
    }
}