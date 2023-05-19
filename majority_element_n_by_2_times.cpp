    int majorityElement(int a[], int size)
    {
        int ele;
        int cnt = 0;
        
        for(int i = 0; i < size; i++) {
            if(cnt == 0) {
                ele = a[i];
                cnt = 1;
            }
            
            else if(a[i] == ele)
                cnt++;
            
            else
                cnt--;
        }
        
        if(cnt == 0)
            return -1;
            
        int cnt1 = 0;
        
        for(int i = 0; i < size; i++) {
            if(a[i] == ele)
                cnt1++;
        }
        
        if(cnt1 > size / 2)
            return ele;
        else
            return -1;
    }
