#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr){
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=0,j=nums.size()-k-1;
        while(i<=j){
            cout<<"1l i:"<<i<<" j:"<<j<<endl;
            swap(nums[i++],nums[j--]);
        }
        i=k+1,j=nums.size()-1;
        while(i<=j){
            cout<<"2l i:"<<i<<" j:"<<j<<endl;
            swap(nums[i++],nums[j--]);
        }
        i=0,j=nums.size()-1;
        while(i<=j){
            cout<<"3l i:"<<i<<" j:"<<j<<endl;
            swap(nums[i++],nums[j--]);
        }
    }
};

int main(){
    Solution solve = Solution();
    vector<int>nums = {-1,2};
    int k = 3;

    solve.rotate(nums,k);

    for(auto i :nums){
        cout<<i<<" ";
    }
}

// 4321 765
//5671234