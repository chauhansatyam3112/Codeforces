#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < GivenString.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(), GivenString[i]) != vowels.end())
        {
            GivenString = GivenString.replace(i, 1, "");
            i -= 1;
        }
    }
    return GivenString;
}