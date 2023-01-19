#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ int n;
        cin >> n;
        vector<int> arr(n);
        int maxi = INT_MIN;
        int index = 1;
        for (int i = 0; i < n; i++)
        {
            /* code */ cin >> arr[i];
            if (arr[i] >= maxi)
            {
                maxi = arr[i];
                index = i + 1;
            }
        }
        cout << index << endl;
        
    }
}