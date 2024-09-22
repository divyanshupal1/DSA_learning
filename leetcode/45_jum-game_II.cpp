#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,INT_MAX);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            for(int j=1;j<=nums[i];j++){
                if(i+j>n-1) continue;
                dp[i]=min(dp[i+j]+1,dp[i]);
            }
        }
        return dp[0];
    }
};


int main () {
    Solution solver = Solution();
    vector<int> nums = {10,9,8,7,6,5,4,3,2,1,1,0};
    // 2
    cout<<solver.jump(nums);
}