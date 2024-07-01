class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair <pair<int,int>,int >> q;
        int vis[n][m];
        for(int i=0; i<n ; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int tm=0;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
             tm = max(t, tm);
            q.pop();
            for(int i = 0; i<4; i++){
                int frow = r+row[i];
                int fcol = c+col[i];
                if(frow<n && frow>=0 && fcol<m && fcol>=0 && vis[frow][fcol]!=2 && grid[frow][fcol]==1){
                    q.push({{frow,fcol}, t+1});
                    vis[frow][fcol]=2;
                }
            }

        }
        for(int i=0; i<n ; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j]==1 && vis[i][j]!=2) return -1; 
            }}
            return tm;

    }
};