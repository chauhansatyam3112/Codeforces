#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */ // string h = "abcdefghijklmnopqrstuvwxyz";
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = n - 1; i >= 0;)
        {
            /*if(i+2<n && s[i+2]=='0'){
                if(i+3<n && s[i+3]=='0'){
                    string temp=s.substr(i,1);
                    int b=stoi(temp);
                    ans+=('a'+(b-1));
                    i++;
                }else{
                    string temp=s.substr(i,2);
                    int b=stoi(temp);
                    ans+=('a'+(b-1));i+=3;
                }
            }else{
                  string temp=s.substr(i,1);
                  int b=stoi(temp);
                  ans+=('a'+(b-1));
                  i++;
            }
        }
        cout<<ans<<endl;*/
            if (i == 0)
            {
                string temp = s.substr(i, 2);
                int b = stoi(temp);
                ans += ('a' + (b-1));
                i -= 2;
            }
            else
            {
                string temp = s.substr(i, 1);
                int b = stoi(temp);
                ans += ('a' + (b - 1));
                i -= 1;
            }
        }
        cout << ans << endl;
    }
}