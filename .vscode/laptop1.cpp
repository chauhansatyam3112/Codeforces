

 #include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
 
int main()
{
    int n;cin>>n;
    pair<int,int>p[n];
    for (int i = 0; i < n; i++)
    {
        int x,y;cin>>x>>y;
       p[i]= make_pair(x,y);
    }
    sort(p,p+n);
    for (int i = 0; i < n-1; i++)
    {
        /* code */ if(p[i].second>p[i+1].second){
            cout<<"Happy Alex"<<endl;return 0;
        }
        
    }cout<<"Poor Alex"<<endl;
    
    
}