class Solution {
public:
    void dfs(vector<vector<int>>& image,vector <vector<int>>& ans, int sr, int sc, int newcolor, int drow[], int dcol[], int n , int m, int initcolor){
        ans[sr][sc]=newcolor;
        for(int i = 0; i<4; i++){
            int nr = sr + drow[i];
            int nc = sc + dcol[i];
            if(nr>=0&& nr<n && nc>=0 && nc<m && image[nr][nc]==initcolor && ans[nr][nc]!=newcolor ){
                ans[nr][nc] = newcolor;
                dfs(image, ans, nr, nc, newcolor, drow, dcol, n, m, initcolor);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector <vector<int>> ans = image;
        int initcolor = image[sr][sc];
        int drow[]= {-1, 0, 1, 0};
        int dcol[]= { 0, 1, 0, -1};
        int n = image.size();
        int m = image[0].size();

        dfs(image, ans, sr, sc, color, drow, dcol, n, m, initcolor);
        return ans;

    }
};