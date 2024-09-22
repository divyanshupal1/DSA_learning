#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr){
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

class Solution {
    void reverse(vector<int>&nums,int start,int end){
        while(start<=end) swap(nums[start++],nums[end--]);
    }
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(nums.size()==1) return;
        int j=nums.size()-k-1;
        reverse(nums,0,j);
        reverse(nums,j+1,nums.size()-1);
        reverse(nums,0,nums.size()-1);
    }
};

int main(){
    Solution solve = Solution();
    vector<int>nums = {-1,-100,3,99};
    int k = 2;

    solve.rotate(nums,k);

    for(auto i :nums){
        cout<<i<<" ";
    }
}

// 4321 765
//5671234