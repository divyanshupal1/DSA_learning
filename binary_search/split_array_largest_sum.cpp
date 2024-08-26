#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr){
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}



class Solution {
bool splitPossible(vector<int>& nums, int k,int sum){
    int count=0;
    int i=0,temp_sum=0;
    while(i<nums.size()){
        temp_sum+=nums[i];
        if(temp_sum>sum){
            count++;
            temp_sum=0;
        }
        else{
            i++;
        }        
        if(count==k) return true;
    }
    return false;
}
public:
    int splitArray(vector<int>& nums, int k) {        
        int maxi = 0;
        for(int i=0;i<nums.size();i++) maxi+=nums[i];
        int mini = 1;
        int ans = 0;
        while(maxi>=mini){
            int mid = mini + (maxi-mini)/2;
            if(splitPossible(nums,k,mid)){
                ans=mid+1;
                mini=mid+1;                
            }
            else{                
                maxi=mid-1;                
            }
            
        }
        return ans;
        
    }
};



int main(){
    Solution solve = Solution();
    vector<int> nums = {7,2,5,10,8};
    int k =3;
    cout<<solve.splitArray(nums,k);
    return 0;
}