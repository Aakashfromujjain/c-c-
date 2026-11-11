class Solution {
  public:
    bool checkWithinK(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int, int>mpp;
        
        for(int i=0; i<n; i++){
            if(mpp.find(arr[i])!=mpp.end()){
                if(i-mpp[arr[i]]<=k) return true;
            }
            mpp[arr[i]]=i;
        }
        
        return false;
    }
};
