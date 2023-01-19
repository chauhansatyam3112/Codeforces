#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
int main(){
    ll t ;cin>>t;
    while (t--)
    {
        /* code */ll n,m;
        cin>>n>>m;
        if(n>3 || m>3)
        {
            cout<<1<<" "<<1<<endl;
        }else 
        {
            if(n==1 ||m==1)
            cout<<1<<" "<<1<<endl;
            else 
            {
                cout<<n-1<<" "<<m-1<<endl;
            }
        }
    }
    
}