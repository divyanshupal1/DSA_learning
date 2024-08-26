#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//my solution :- this solution focuses on maintaining the position of elements which is not necessary
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int j=0;j<nums.size()-count;j++){
            if(nums[j]!=val) continue;
            count++;
            int i=j;
            while(i<nums.size()-1){
                if(nums[i]==val){
                    swap(nums[i],nums[i+1]);
                    i++;
                }
            }
            j--;
        };
        return nums.size()-count;
    }

//optimised solution :-this does not maintain the order of elements just pop the unwanted value 
    // int removeElement(vector<int>& nums, int val) {
    //     for(int j=0;j<nums.size();j++){
    //         if(nums[j]!=val) continue;
    //         nums[j]=nums[nums.size()-1];
    //         nums.pop_back();
    //         j--;
    //     };
    //     return nums.size();
    // }
};

int main(){
    Solution solve = Solution();
    vector<int> nums1 = {0,1,2,2,3,0,4,2};
    cout<<solve.removeElement(nums1,2)<<endl;
    for (auto i:nums1){
        cout<<i<<" ";
    }
    //expected output

    //my solution
    //5
    // 0 1 3 0 4 2 2 2 

    //optimised
    //5
    // 0 1 4 0 3  
    
    return 0;
}