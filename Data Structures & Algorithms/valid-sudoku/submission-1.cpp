class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (unsigned i = 0; i < 9; ++i) { // checking rows efficiently
            set<char> curr_checking;
            for (unsigned j = 0; j < 9; ++j) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (!curr_checking.insert(board[i][j]).second) {
                    return false;
                };
            }
        }

        for (unsigned j = 0; j < 9; ++j) { // checking columns efficiently
            set<char> curr_checking;
            for (unsigned i = 0; i < 9; ++i) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (!curr_checking.insert(board[i][j]).second) {
                    return false;
                };
            }
        }


        for (unsigned square = 0; square < 9; ++square) {
            set<char> curr_checking;
            for (unsigned i = 0; i < 3; ++i) {
                for (unsigned j = 0; j < 3; ++j) {
                    unsigned row = (square / 3) * 3 + i;
                    unsigned col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') {
                        continue;
                    }
                    if (!curr_checking.insert(board[row][col]).second) {
                        return false;
                    };
                }
            }
        }


        return true;
    }
};
