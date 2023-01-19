#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        /*  for (int i = 0; i < 2; i++)
         {
             for (int j = 0; j < 2; j++)

             cin >> a[i][j];
         }
         if(a[0][0]==a[1][1]||a[0][1]==a[1][0]){
             cout<<"1"<<endl;
             return 0;
         }else if(a[0][0]==a[0][1] &&a[1][0]!=a[1][1])
         {
             cout<<"2"<<endl;return 0;
         }else if(a[0][0]!=a[])
     }*/
        string a, b;
        cin >> a;
        cin >> b;
        if (a[0] == b[1] && a[0] != a[1])
        {
            cout << "1" << endl;
            return 0;
        }
        else if (a[0] == a[1] || b[0] == b[1] && a[0] != b[0])
        {
            cout << "2" << endl;
            return 0;
        }
        else if (a == b)
        {
            cout << "0" << endl;
            return 0;
        }
        else if (a[0] != a[1] && b[0] != b[1])
        {
            cout << "3" << endl;
            return 0;
        }
        else if (a[0] == a[1] && b[0] == b[1])

        {
            cout << "1" << endl;
            return 0;
        }
    }
}