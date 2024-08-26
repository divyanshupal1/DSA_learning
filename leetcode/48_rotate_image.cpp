#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        for(int j=0;j<floor(size/2);j++){
            for(int i=j;i<size-1-j;i++){
                // cout<<"j:"<<j<<" i:"<<i<<endl;
                // cout<<"swap "<< matrix[j][i]<<" "<< matrix[i][size-1-j]<<endl;
                swap(matrix[j][i],matrix[i][size-1-j]);
                // cout<<"swap "<<matrix[j][i]<<" "<<matrix[size-1-j][size-1-i]<<endl;
                swap(matrix[j][i],matrix[size-1-j][size-1-i]);
                // cout<<"swap->"<<matrix[j][i]<<" "<<matrix[size-1-i][j]<<endl;
                swap(matrix[j][i],matrix[size-1-i][j]);
            }
        }
        
    }
};

int main(){
    Solution solver = Solution();
    vector<vector<int>> nums1 = {
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };
    solver.rotate(nums1);

    for (auto i:nums1){
        for (auto elem:i){
            cout<<elem<<" ";
        }
        cout<<endl;
    }

}