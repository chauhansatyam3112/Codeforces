#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
int main(){
    ll t;cin>>t;
    while (t--)
    {
        /* code */ll n;cin>>n;vector<int>v(n);
        for (int i = 0; i <n; i++)
        {
            /* code */cin>>v[i];
        }
        bool flag=false;
        vector<int>v1(n);
        v1[0]=v[0];
        for (int i = 1; i < n; i++)
        {
            /* code */if(v[i]==0)
            v1[i]=v1[i-1];
            else{
                if(v1[i-1]-v[i]>=0){
                flag=true;
                break;}
                else{
                    v1[i]=v1[i-1]+v[i];
                    flag=false;
                }
            }

        }
        if(flag){
            cout<<-1<<endl;
        }else{
            for(auto it:v1)
            cout<<it<<endl;
        }
        
        
    }
    
}
