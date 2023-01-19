#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    int n;
    cin >> n;
    set<char> s;
    for (int i = 0; i < n * n; i++)
    {
        char x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() > 2 || s.size() < 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}