#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        for ( int i = 0; i <s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]+=32;

        }
        if(s[0]=='y'&&s[1]=='e'&&s[2]=='s')
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    return 0;
    
}