#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll     long long int
#define lld    long double
#define MOD    1000000007
 
 
//################## Vector ###################
#define vll                  vector<ll>
#define vi                   vector<int>
#define vpi                  vector<pair<int,int>>
#define vpll                 vector<pair<ll,ll>>
#define pll                  pair<ll,ll>
#define pi                   pair<int,int>
#define pb                   push_back
#define mp                   make_pair
#define all(a)               (a).begin(), (a).end()
#define mem(a,x)             memset(a,x,sizeof(a))
#define ff                   first
#define ss                   second
#define f(i,n)               for(int i=0;i<n;i++)
#define fo(i,l,u)            for(int i=l;i<u;i++)
#define rfo(i,l,u)           for(int i=l;i>=u;i--)
#define ps(x,y)              fixed<<setprecision(y)<<x
#define nl                   "\n"
#define py                   cout<<"YES"<<nl;
#define pn                   cout<<"NO"<<nl;
#define pmp                  cout<<i.first<<" "<<i.second<<nl;
#define p(x,y)               cout<<"x is "<<x<<" "<<"y is "<<y<<nl;
 
// Syntax to create a min heap for priority queue 
//priority_queue <int, vector<int>, greater<int>> g = gq;  
// v.push_back( make_pair(a[i],ar1[i]) );
 
//debug templates 
#define debug(x)       cerr<< #x <<" : "<< x << endl;
#define debuga(A,N)    cerr<< #A <<" : [";for(int i = 0; i<N;i++) cerr<<A[i]<<" "; cerr<<"]\n";
#define debuga2(A,N,M) cerr<< #A << " : \n"; for(int i=0;i<N;i++){cerr<<"[";for(int j=0;j<M;++j) cerr<<A[i][j]<<" ";cerr<<"]\n";}
#define debugp(p)      cerr<< #p <<" : "<<"("<<(p).first<<","<<(p).second<<")\n";
#define debugv(v)      cerr<< #v <<" : "<<"[";for(int i = 0; i< (v).size(); i++) cerr<<v[i]<<" "; cerr<<"]\n";
#define debugv2(v)     cerr<< #v << " : \n"; for(int i=0;i<v.size();i++){cerr<<"[";for(int j=0;j<(v[0].size());++j) cerr<<v[i][j]<<" ";cerr<<"]\n";}
#define debugs(m)      cerr<< #m <<" : [ "; for(auto itr = m.begin(); itr!=m.end();itr++) cerr<<*itr<<" "; cerr<<"]\n";
#define debugm(m)      cerr<< #m <<" : [ "; for(auto itr = m.begin();itr!=m.end(); itr++) cerr<<"("<<itr->first<<","<<itr->second<<") ";cerr<<"]\n";
 
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
vector<ll> factors(ll n)
{
     vector<ll> v;
    for (int i = 1; i <= sqrt(n); i++) 
    {
         if (n % i == 0) 
         {
            if (n / i == i)
            {
                v.push_back(i);
            }
            else 
            {
                v.push_back(i);
                v.push_back(n / i);
            }
         }
    }
     return v;
}
 
vector<ll> primeFactors(int n)
{
    vector<ll> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.pb(n);
 
    return v;
}
 
 
bool isPowerofTwo(long long n)
{
    if (n == 0)
        return 0;
    if ((n & (~(n - 1))) == n)
        return 1;
    return 0;
}
 
ll power(ll x,ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
 
ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}
 
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
 
ll power(ll x,ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
 
 
void solve()
{
    string s,t;
    cin>>s>>t;
 
    sort(all(s));
 
    ll cnta=0,cntb=0,cntc=0;
    vector<char> v;
 
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            cnta++;
        }
        else if(s[i]=='b')
        {
            cntb++;
        }
        else if(s[i]=='c')
        {
            cntc++;
        }
        else
        {
            v.pb(s[i]);
        }
    }
 
    if(cnta==0 || cntb==0 || cntc==0)
    {
        cout<<s<<nl;
    }
    else
    {
        if(t=="abc")
        {
           for(int i=0;i<cnta;i++)
           {
             cout<<'a';
           }
 
           for(int i=0;i<cntc;i++)
           {
             cout<<'c';
           }
 
           for(int i=0;i<cntb;i++)
           {
             cout<<'b';
           }
 
           for(auto i : v )
           {
              cout<<i;
           }
 
           cout<<nl;
        }
        else
        {
            cout<<s<<nl;
        }
    }
}    
 
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
   
    int t;
    //t=1;
    cin>>t;
 
    while(t--)
    {
        solve();
    }
}
 
 
    
 
 
 