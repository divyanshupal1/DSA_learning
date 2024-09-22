#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col_size = matrix[0].size();
        int row_size = matrix.size();
        set<int> rows;
        set<int> cols;
        for(int i=0;i<row_size;i++){
            for(int j=0;j<col_size;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto row:rows){
            for(int i=0;i<col_size;i++){
                matrix[row][i]=0;
            }
        }
        for(auto col:cols){
            for(int i=0;i<row_size;i++){
                matrix[i][col]=0;
            }
        }
    }
};

int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,0,7,8},
        {0,10,11,12},
        {13,14,15,0}
    };
    Solution solver = Solution();
    solver.setZeroes(matrix);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}