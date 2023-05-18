    int lenOfLongSubarr(int A[],  int N, int K) 
    {
        unordered_map<long long, int> preSum;
        long long sum = 0;
        int maxi = 0;
        for(int i = 0; i < N; i++) {
            sum += A[i];
            if(sum == K)
                maxi = max(maxi, i+1);
            long long rem = sum - K;
            if(preSum.find(rem) != preSum.end()) {
                int len = i - preSum[rem];
                maxi = max(maxi, len);
            }
            if(preSum.find(sum) == preSum.end())    // so that this works for arrays with 0s.
                preSum[sum] = i;
                
        }
        
        return maxi;
    } 
