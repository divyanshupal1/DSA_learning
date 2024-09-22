#include<bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}
void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0,j=0,k=0;
        for(i;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[j]+nums[k]+nums[i];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1])k--;
                    j++;k--;
                }
                else if(sum < 0) j++;
                else k--;
            }
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = solver.threeSum(v);
    printMatrix(ans);
    return 0;
}