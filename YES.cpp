#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
        if(s=="Yes"||s=="yEs"||s=="YES"||s=="yeS")
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        }
        

    }
    return 0;
    
}