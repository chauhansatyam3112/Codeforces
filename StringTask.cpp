#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    for (int i = 1; i <= n; i++)
    {
        cin >> str;
        for (int j = 1; j <= str.length(); j++)
        {
            if (str[j] == 'a' || str[j] == 'o' || str[j] == 'e' || str[j] == 'u' || str[j] == 'i' || str[j] == 'A' ||
                str[j] == 'O' || str[j] == 'E' || str[j] == 'U' ||
                str[j] == 'I' || str[j] == 'y' || str[j] == 'Y')

            {
                str.erase(str.begin() + (j));
                j--;
            }
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << "." << char(tolower(str[i]));
    }
}