class Solution {
public:
void solve(int col, vector<string> &chess, int &res,vector<int> &left,vector<int> &topleft, vector<int> &bottomleft, int n ){
        if(col==n){
            res++;
            return;
        }
        for(int row=0; row<n; row++){
            if(left[row] == 0 && topleft[row+col]==0 && bottomleft[n-1 + col - row]==0){
                chess[row][col]='Q';
                left[row]=1;
                topleft[row+col]=1;
                bottomleft[n-1+col-row]=1;
                solve(col+1, chess, res, left, topleft, bottomleft, n);
                chess[row][col]='.';
                left[row]=0;
                topleft[row+col]=0;
                bottomleft[n-1+col-row]=0;

            }
        }
    }
    int totalNQueens(int n) {
        int res=0;
vector<string> chess(n);
        string s(n, '.');
        for(int i = 0;i<n; i++){
            chess[i]=s;
        }
        vector<int> left(n,0), topleft(2*n-1,0), bottomleft(2*n-1,0);
        solve(0, chess, res, left, topleft, bottomleft, n);
        return res;    }
};