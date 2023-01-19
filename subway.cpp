#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define sp " "
#define pp pair<ll, ll>
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost_n1_ride=a;
    int cost_m_ride=(m/b);
    int min_price=0;
    if(m*a<=b)
    {cout<<n*a;}
    else{

     int q=n/m;int r=n%m;
     min_price=q*b+min((r*a),b);
     cout<<min_price;
     }

   //if(cost_m_ride<=cost_n1_ride)
   //{
    //if(r>=0)
    //{
      //  min_price=q*b+r*a;
    //}
    
   //}

}