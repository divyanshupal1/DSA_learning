#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=0,col=0;
        int cols = matrix[0].size();
        int rows = matrix.size();
        cout<<"row "<<rows<<" col "<<cols<<endl;
        vector<int> ans;
        int i=row,j=col;
        int count=0;
        while(count<rows*cols){
            count++;
            ans.push_back(matrix[i][j]);
            cout<<"rows:"<<i<<" cols:"<<j<<" "<<matrix[i][j]<<endl;
            if(i==row && j!=cols-col-1){
                j++;
                continue;
            }
            if(i==row && j==cols-col-1){
                i++;
                continue;
            }
            if(j==cols-col-1 && i<rows-row-1){
                i++;
                continue;
            }
            if(j==cols-col-1 && i==rows-row-1){
                j--;
                continue;
            }
            if(i==rows-row-1 && j>col){
                j--;
                continue;
            }
            if(i>row && j==col){
                i--;
            }
            if(i==row && j==col){
                row++;col++;
                i=row;
                j=col;
            }
            
        }

        return ans;
    }
};


int main(){
    Solution solve = Solution();
    // vector<vector<int>> nums1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> nums1 = {{1,2,3,4} ,{5,6,7,8}, {9,10,11,12}};
    vector<int> ans = solve.spiralOrder(nums1);
    for (auto i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}