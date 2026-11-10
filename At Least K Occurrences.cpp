class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        int n = arr.size();
        for(int val:arr)if((++m[val])==k)return val;
        return -1;
    }
};
