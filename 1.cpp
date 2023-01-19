#include <bits/stdc++.h>
using namespace std;
 
   

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
       cin>>v[x];   
    }
    for (int i = 0; i < n; i++)
    {
       int ans=0;
       for (int j = 0; j<n; j++)
       {
         if(i!=j)
         {
            ans=ans^v[j];
         }
       }
       if(v[i]==ans){
        cout<<v[i]<<endl;
        return 0;
       }
       

    }
    
    

   return 0; 
    
}

   