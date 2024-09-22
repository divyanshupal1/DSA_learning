#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,1);
        // vector<int> post(n,1);

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        int post = 1;
        for(int i=n-1;i>=0;i--){
            pre[i] *= post;
            post = post*nums[i];
        }
        // for(int i=0;i<n;i++){
        //     pre[i]=pre[i]*post[i];
        // }

        return pre;
    }
};

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> prod_Arr(n,1);
//         int left_Prod=1;
//         for(int i=0; i<n; ++i){
//             cout<<prod_Arr[i]<<" "<<left_Prod<<" "<<nums[i]<<endl;
//             prod_Arr[i]*=left_Prod;
//             left_Prod*=nums[i];
//         }
//         cout<<"right prod"<<endl;
//         int right_Prod=1;
//         for(int i=n-1; i>=0; --i){
//             cout<<prod_Arr[i]<<" "<<right_Prod<<" "<<nums[i]<<endl;
//             prod_Arr[i]*=right_Prod;
//             right_Prod*=nums[i];
//         }
//         return prod_Arr;
//     }
// };

int main(){
    Solution solver = Solution();
    vector<int> nums ={1,2,3,4};
    vector<int> ans = solver.productExceptSelf(nums);
    for(auto i:ans) cout<<i<<" ";
    return 0;
}