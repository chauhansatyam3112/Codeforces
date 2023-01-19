#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
#define f(i,n) for(int i=0;i<n;i++) 

int main()
{
    int n, y;
    cin >> n >> y;
    int count = 0;
    int ans;
    vector<int> v, v1;
    //int p = 0;
    f(i,n)
    {
        /* code */
        int t;
        cin >> t;
        v.push_back(t);
    }
    f(i,n)
    {
        int sum = y + v[i];
        if (sum <= 5)
        {
            v1.push_back(sum);
            count++;
        }
    }
    ans = count / 3;
    cout << ans << endl;
}