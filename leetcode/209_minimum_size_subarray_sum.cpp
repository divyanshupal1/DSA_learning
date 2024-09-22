#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int l=0,r=0;
        int sum=nums[0];
        while(l<nums.size() && r<nums.size()){
            // cout<<l<<" "<<r<<endl;
            if(sum>=target){
                sum-=nums[l];
                ans=min(ans,r-l+1);
                if(ans==1) return 1;
                // cout<<l<<" "<<r<<endl;
                l++;
            }else{
                r++;
                sum+=(r>nums.size()-1?0:nums[r]);
            }
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> v = {1,1,1,1,1,1,1,1};
    int target=11;
    cout<<solver.minSubArrayLen(target,v);
    return 0;
}