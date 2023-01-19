#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int findMaxAverage(vector<int> nums, int k);

int main()
{
    vector<int> nums;
    int k, n;
    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        /* code */ int x;
        cin >> x;
        nums.push_back(x);
    }
    int t = findMaxAverage(nums, k);
    cout << t;
}
int findMaxAverage(vector<int> nums, int k)
{
    int maxavg = INT_MIN;
    int curravg = 0;
    for (int i = 0; i < k; i++)
    {
        /* code */ curravg += nums[i];
    }
    maxavg = max(maxavg, curravg / k);
    for (int i = k; i < nums.size(); i++)
    {
        /* code */ curravg -= nums[i - k];
        curravg += nums[i];

        maxavg = max(maxavg, curravg / k);
    }
    return maxavg;
}
