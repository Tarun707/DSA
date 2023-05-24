    vector<long long> printFibb(int n) 
    {
        vector<long long> ans;
        long curr = 1;
        long prev = 1;
        long next = 0;
        ans.push_back(prev);
        if(n != 1)
            ans.push_back(curr);
        for(int i = 0; i < n - 2; i++) {
            next = prev + curr;
            ans.push_back(next);
            prev = curr;
            curr = next;
        }
        
        return ans;
    }
