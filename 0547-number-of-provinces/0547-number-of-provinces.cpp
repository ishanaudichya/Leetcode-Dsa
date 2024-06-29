class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool> &vis, int &i, int &n){
        vis[i]=1;
        for(int j = 0; j<n; j++){
            if(isConnected[i][j] && !vis[j]) dfs(isConnected,vis, j,n );
        }

        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected[0].size();
    vector<bool> vis(n, false);
    int res = 0;
    for(int i = 0; i<n; i++){
        if(!vis[i]){
            res++;
            dfs(isConnected, vis,i,n );
        }
    }
    return res;
    }
};