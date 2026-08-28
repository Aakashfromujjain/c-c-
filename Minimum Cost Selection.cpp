class Solution {
  public:
    int minCost(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int p0 = 0, p1 = 0,p2 = 0,c0 = mat[0][0],
        c1 = mat[0][1],c2 = mat[0][2];
        for(int i = 1;i<n;i++)
        {
            p0 = c0,p1 = c1, p2 = c2;
            c0 = mat[i][0] + min(p1,p2);
            c1 = mat[i][1] + min(p2,p0);
            c2 = mat[i][2] + min(p0,p1);
        }
        return min({c0,c1,c2});
    }
};

