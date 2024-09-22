#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> matrix[9];

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;

                char value = board[i][j];
                char index = (i/3)*3 + (j/3);

                if(rows[i].count(value) || cols[i].count(value) || matrix[index].count(value)) return false;

                rows[i].insert(value);
                cols[j].insert(value);
                matrix[index].insert(value);
            }
        }
        
        return true;
    }
};


int main(){
    Solution sol = Solution();
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    } ;
    cout<<sol.isValidSudoku(board);

    return 0;
}