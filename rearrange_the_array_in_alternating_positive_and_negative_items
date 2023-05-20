	void rearrange(int arr[], int n) {
	    
	    int i = 0;
	    int j = 0;
	    
	    int count = 0;
	    
	    vector<int>pos;
	    vector<int>neg;
	    
	    for(int i = 0; i < n; i++){
	        if(arr[i] >= 0)
	            pos.push_back(arr[i]);
	        else
	            neg.push_back(arr[i]);
	    }
	    
	    while(i < pos.size() && j < neg.size()){
	        arr[2 * i] = pos[i];
	        i++;
	        count++;
	        arr[2 * j + 1] = neg[j];
	        j++;
	        count++;
	    }
	    
	   
	    while(i < pos.size())
	    {
	        arr[count] = pos[i];
	        i++;
	        count++;
	    }
	    
	    while(j < neg.size())
	    {
	        arr[count] = neg[j];
	        j++;
	        count++;
	    }
	}
