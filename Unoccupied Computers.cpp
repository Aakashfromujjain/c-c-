class Solution {
  public:
    int solve(int n, string s) {
        // code here
        
        // 0 -> first time come.
        // 1 -> already inside.
        // 2 -> rejected person.
        
        int ans = 0;
        int arr[26] = {0};
        
        for(int i=0;i<s.size();i++){
            
            int index = s[i] - 'A';
            
            if(arr[index] == 2)continue;
            else if(arr[index]==1){
                n++;
                arr[index] = 0;
            }
            else{
                
                if(n==0){
                    arr[index] = 2;
                    ans++;
                }
                else{
                    arr[index] = 1;
                    n--;
                }
                
            }
            
        }
        
        return ans;
        
        
    }
};
