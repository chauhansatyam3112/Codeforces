

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    vector<float> arr = {1.2,
                         1.3,
                         5.0,
                         3.0,
                         99};
    int n = arr.size();
    float max_entity = *max_element(arr.begin(), arr.end());
    float min_entity = *min_element(arr.begin(), arr.end());
    float max_profit = max_entity - min_entity;
    cout << max_profit;
}
