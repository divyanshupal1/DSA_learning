#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0,cnt=0;
        for (auto i:nums){
            if(cnt==0){
                ans=i;
            }
            if(i==ans) cnt++;
            else cnt--;
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {6,5,5};
    Solution solver = Solution();
    cout<<solver.majorityElement(nums);
}
