int diff=(sum2-sum1)/2;
        sort(B.begin(),B.end());
        
        for(auto it:A)
        {
           if(binary_search(B.begin(),B.end(),it+diff)==true)
           {
               ans.push_back(it);ans.push_back(it+diff);
               return ans;
               
           }
        }
        return ans;
            