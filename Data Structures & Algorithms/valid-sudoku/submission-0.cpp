class Solution {
public:
    bool checkBox(vector<vector<char>>&board,int row,int col){
         unordered_set<char>st;
        for (int i = row;i<row+3;i++){
            for (int j = col;j<col+3;j++){
                if (board[i][j]=='.') continue;
                if (st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //box check
        for (int i =0;i<9;i+=3){
            for (int j = 0;j<9;j+=3){
                if (checkBox(board,i,j)==false){
                    return false;
                }
            }
        }

        // row check
        for (int i =0;i<9;i++){
            unordered_set<char>st;
            for (int j = 0;j<9;j++){
                if (board[i][j]=='.') continue;
                if (st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }

        // col check
        for (int i =0;i<9;i++){
            unordered_set<char>st;
            for (int j = 0;j<9;j++){
                if (board[j][i]=='.') continue;
                if (st.count(board[j][i])) return false;
                st.insert(board[j][i]);
            }
        }
        return true;
    }
};
