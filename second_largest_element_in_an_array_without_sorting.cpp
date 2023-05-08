class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int maxi = 0;
	    for(int i = 0; i < n; i++)
	        maxi = max(arr[i], maxi);
	    int second_largest = -1;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] != maxi)
	            second_largest = max(second_largest, arr[i]);
	    }
	    
	    return second_largest;
	}
};
