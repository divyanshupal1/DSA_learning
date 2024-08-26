#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            
        }
        return i+1;
    }
};

int main(){
    Solution solve = Solution();
    vector<int> nums1 = {1,1};
    cout<<solve.removeDuplicates(nums1)<<endl;
    for (auto i:nums1){
        cout<<i<<" ";
    }
    
    return 0;
}