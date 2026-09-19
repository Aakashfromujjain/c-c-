class Solution {
  public:
    
    int findMinCost(string &s1, string &s2, int c1, int c2) {
        // code here
        int n = s1.size();
        int m = s2.size();
        
        if(m>n)return findMinCost(s2,s1,c2,c1);
        
        vector<int>dp(m+1,0);
        
        int temp = 0;
        int pre = 0;
        
        for(int i=n-1;i>=0;i--){
            pre = 0;
            for(int j=m-1;j>=0;j--){
                
                temp = dp[j];
                if(s1[i]==s2[j]) dp[j] = 1+pre; 
                else dp[j] = max(dp[j] ,dp[j+1]);
                pre = temp;
        
            }
        }
        
        
        int lcs = dp[0];
        return ((n-lcs)*c1) + ((m-lcs)*c2);
    }
};
