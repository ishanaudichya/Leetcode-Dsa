class Solution {
public:
    bool solve(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char w = '1'; w <= '9'; w++) {
                        board[i][j] = w;
                        if (check(w, board, i, j)) {
                            if (solve(board)) {
                                return true;
                            } else {
                                board[i][j] = '.';
                            }
                        } else {
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool check(char k, vector<vector<char>> &board, int i, int j) {
        for (int l = 0; l < 9; l++) {
            if (board[i][l] == k && l != j) {
                return false;
            }
            if (board[l][j] == k && l != i) {
                return false;
            }
            int a = (i / 3) * 3 + l / 3;
            int b = (j / 3) * 3 + l % 3;
            if (board[a][b] == k && a != i && b != j) {
                return false;
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
