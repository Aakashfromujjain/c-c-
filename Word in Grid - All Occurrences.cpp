class Solution {
  public:
  
    int dr[8]={0, 1, 1, 1, 0, -1, -1, -1};
    int dc[8]={1, 1, 0, -1, -1, -1, 0, 1};
    int n, m, len;
    
    bool dfs(int r, int c, int i, int x, 
    vector<vector<char>> &mat, string &word){
        
        if(x>=len) return true;
        
        if(r<0 || r>=n || c<0 || c>=m || mat[r][c]!=word[x]){
            return false;
        }
        
        int nr=r+dr[i];
        int nc=c+dc[i];
        
        return dfs(nr, nc, i, x+1, mat, word);
    }
  
    vector<vector<int>> searchWord(vector<vector<char>> &mat, string &word) {
        // Code here
        n=mat.size();
        m=mat[0].size();
        len=word.length();
        
        char st=word[0];
        
        vector<vector<int>>ans;
        
        for(int r=0; r<n; r++){
            for(int c=0; c<m; c++){
                if(mat[r][c]==st){
                    for(int i=0; i<8; i++){
                        if(dfs(r, c, i, 0, mat, word)){
                            ans.push_back({r, c});
                            break;
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};
