#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
    while(k>0){
        int temp=nums[0],temp2;
        for(int j=1;j<nums.size();j++){
            temp2=nums[j];
            nums[j]=temp;
            temp=temp2;
        }
        nums[0]=temp;
        k--;
    }
    // if(k==1){
    //     return;
    // }
    // vector<int> nums2;
    // auto it = nums.begin();  
    // nums2.insert(nums2.begin(),it+k,nums.end());
    // nums.erase(it+k,nums.end());
    // nums.insert(nums.begin(),nums2.begin(),nums2.end());

}

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    rotate(nums,k);

    // cout<<*(++it)<<endl;
    for (auto i : nums)
    {
        cout<<i<<" ";
    }
    
    

    return 0;
}
