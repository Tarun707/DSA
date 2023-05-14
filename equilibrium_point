    int equilibriumPoint(long long arr[], int n) {
        int i = 0;
        int j = n - 1;
        int sum1 = arr[0];
        int sum2 = arr[n - 1];
        
        if(n == 1)
            return 1;
            
        while(i < j) {
            if(sum1 < sum2) {
                i++;
                sum1 += arr[i];
            }
            else if(sum2 < sum1) {
                j--;
                sum2 += arr[j];
            }
            else {
                if((i + 1) == (j - 1))
                    return i + 2;
                else {
                    i++;
                    sum1 += arr[i];
                }
            }
        }
        
        return -1;
    }
