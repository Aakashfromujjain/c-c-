class Solution {
  public:
  bool isInside(int x , int y , int l , int r , int u , int d){
      return x>=u && y>=l && x<=d && y<=r; 
  }
    const int dirx[4] = {1 ,0 ,-1 , 0};
    const int diry[4] = {0  ,1 , 0 , -1};
    void process(int x , int y , int l , int r , int u , int d , int dir ,int n, vector<int>&curr){
       bool moved = false;
        while(isInside(x + dirx[dir] , y + diry[dir] , l , r , u , d)){
            moved = true;
            x+=dirx[dir];
            y += diry[dir];
            curr.push_back(x * n + y);
        }
        if(dir%2 == 0){
            l++ , r--;
        }else u++ , d--;
            if(moved)process(x , y , l , r , u , d , (dir+1)%4 , n , curr);
    }
    vector<vector<int>> formCoils(int n) {
        // code here
        int m = n* 4;
        vector<vector<int>>vec(2);
        process(-1  , 1 ,1,m , 0 , m-1 , 0 ,m, vec[0]);
        process(m , m , 1 , m , 0 , m-1 , 2 ,m, vec[1]);
        return vec;
    }
};
