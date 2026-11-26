class Solution {
  public:
    vector<int> countVowels(string &s, vector<vector<int>> &queries) {
         int count=0;
        vector<int>pre, ans;
        for(auto &b: s){
            if(b=='a' or b=='e' or b=='i' or b=='o' or b=='u'){count++;}
            pre.push_back(count);
        }
        for(auto &b: queries){
            if(b[0]==0){ans.push_back(pre[b[1]]);}
            else{ans.push_back(pre[b[1]]- pre[b[0]-1]);}
        }
        return ans;
    }
};
