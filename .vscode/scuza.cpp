#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, steps;
        cin >> n >> steps;
        vector<int> apple(n);
        for (int i = 0; i < n; i++)
        {
            cin >> apple[i];
        }

        vector<int> ques(steps);
        for (int i = 0; i < steps; i++)
        {
            cin >> ques[i];
        }

        for (int i = 0; i < steps; i++)
        {
            long long int ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (ques[i] >= apple[j])
                {
                    ans += apple[j];
                }
                else
                {
                    break;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}