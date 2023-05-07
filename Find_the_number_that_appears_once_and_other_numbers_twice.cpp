class Solution{
public:	
	int search(int A[], int N)
	{
	    int xor1 = 0;
	    for(int i = 0; i < N; i++)
	        xor1 = xor1 xor A[i];
	        
	    return xor1;
	}
	 
};