class Solution{
public:
    int remove_duplicate(int a[],int n){
        
        set<int>st;
        int i = 0;
        
        for(int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
        
        for(auto it : st) {
            a[i] = it;
            i++;
        }
        
        return st.size();
    }
};
