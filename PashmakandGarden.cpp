#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    /* if (x1 > 1 || x2 > 1 || y1 > 1 || y2 > 1)
     {
         cout << "-1";
         return 0;
     }

     if (x1 == 1 && x2 == 0)
     {
         // x3=1;x4=1;
         x3 = x1;
         y3 = y1 + 0;
         x4 = x2 + 1;
         y4 = y2 + 0;
         cout << x3 << " " << y3 << " " << x4 << " " << y4;
         return 0;
     }
     else if (x1 == 0 && x2 == 1)
     {
         x3 = x1 + 1;
         y3 = y1 + 0;
         x4 = x2;
         y4 = y2 + 0;
         cout << x3 << " " << y3 << " " << x4 << " " << y4;
         return 0;
     }

     else
     {
         x3 = x1 + 1;
         y3 = y1 + 0;
         x4 = x2 + 1;
         y4 = y2 + 0;
         cout << x3 << " "
              << " " << y3 << " "
              << " " << x4 << " " << y4;
         return 0;
     }*/

    int m;
    m = abs((y2 - y1) / (x2 - x1));
    if (m == 1)
    {
        y3 = y1;
        y4 = y2;
        if (x1 == 0)
        {
            x3 = 1;
            x4 = 1;
        }
        else if (x1 = 1)
        {
            x3 = 0;
            x4 = 0;
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
    else if (m == 0)
    {
        x3 = x1;
        x4 = x2;
        if (y1 == 0)
        {
            y3 = 1;
            y4 = 1;
        }
        else if (y1 = 1)
        {
            y3 = 0;
            y4 = 0;
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
    else if (x1 == y1 && x2 == y2)
    {
        x3 = 1;
        y3 = 0;
        x4 = 0;
        y4 = 1;

        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
    else if (x1 == y2 && y1 == x2)
    {
        x3 = 0;
        y3 = 0;
        x4 = 1;
        y4 = 1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
    return 0;
}