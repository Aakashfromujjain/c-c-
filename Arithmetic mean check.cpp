class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
      sort(arr.begin(),arr.end());
        int siz=arr.size();
        if(arr.size()==1) return 1;
        int dif=arr[1]-arr[0];
        for(int i=1;i<siz;i++) {
            int diff=arr[i]-arr[i-1];
            if(dif!=diff) return 0;
        }
        return 1;
    }
};
