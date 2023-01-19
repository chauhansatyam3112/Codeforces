#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "

int main()
{
    vector<pair<int, int>> arr;
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */ int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }

    for (int i = 0; i < n; i++)
    {
       // bool flag =true;
        int a = 0, b = 0, c = 0, d = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i].first == arr[j].first && arr[i].second < arr[j].second)
                a = 1;
            if (arr[i].first == arr[j].first && arr[i].second > arr[j].second)
                b = 1;
            if (arr[i].first > arr[j].first && arr[i].second == arr[j].second)
                c = 1;
            if (arr[i].first < arr[j].first && arr[i].second == arr[j].second)
                d = 1;
        }
       // bool flag=flase;
        if ((a + b + c + d) == 4)
            ans++;
    }
    cout << ans << "\n";
}
