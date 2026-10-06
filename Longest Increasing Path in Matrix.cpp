class Solution {
    public int longIncPath(int[][] matrix, int n, int m) {
        int[][] dp = new int[n][m];
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = Math.max(ans, dfs(matrix, dp, i, j, n, m));
            }
        }

        return ans;
    }

    private int dfs(int[][] matrix, int[][] dp, int r, int c, int n, int m) {
        if (dp[r][c] != 0) {
            return dp[r][c];
        }

        int best = 1;

        int[] dr = {-1, 1, 0, 0};
        int[] dc = {0, 0, -1, 1};

        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m
                    && matrix[nr][nc] > matrix[r][c]) {
                best = Math.max(best,
                        1 + dfs(matrix, dp, nr, nc, n, m));
            }
        }

        dp[r][c] = best;
        return best;
    }
}
