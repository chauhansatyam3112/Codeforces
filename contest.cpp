#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int p = max(3 * a / 10, a - a / 250 * c);
    int q = max(3 * b / 10, b - b / 250 * d);
    if (p > q)
    {
        cout << "Misha" << endl;
    }
    else if (p < q)
    {
        cout << "Vasya" << endl;
    }
    else
    {
        cout << "Tie" << endl; 
        
    }
}