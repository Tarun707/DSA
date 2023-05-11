    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0;
        int j = 0;
        vector<int> temp;
        
        while(i < n && j < m) {
            if(arr1[i] <= arr2[j]) {
                if(temp.size() == 0 || temp.back() != arr1[i])
                    temp.push_back(arr1[i]);
                i++;
            }
        
            else {
                if(temp.size() == 0 || temp.back() != arr2[j])
                    temp.push_back(arr2[j]);
                j++;
            }
            
        }
        
        while(i < n)
        {
            if(temp.size() == 0 || temp.back() != arr1[i])
                temp.push_back(arr1[i]);
            i++;
        }
        
        while(j < m)
        {
            if(temp.size() == 0 || temp.back() != arr2[j])
                temp.push_back(arr2[j]);
            j++;
        }
        
        return temp;
    }
