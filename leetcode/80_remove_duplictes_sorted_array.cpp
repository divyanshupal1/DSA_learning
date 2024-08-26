#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

class Solution {

public:
    void popElem(vector<int>& nums,int n,int len){
        cout<<"n"<<n<<endl;
        n=n+1;
        while(n < len){
            cout<<"swapping "<<n<<" "<<nums[n-1]<<" "<<nums[n]<<endl;
            swap(nums[n-1],nums[n]);
            n++;
        }
    }
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len<=2) return len;
        int i=0,j=1;
        int count=0;
        while(j<len){
            cout<<"i:"<<nums[i]<<" j:"<<nums[j];
            if(nums[i]==nums[j] && count<1){
                count++;
                i++;
                j++;
            }
            else if(nums[i]==nums[j] && count==1 ){
                // cout<<"i:"<<nums[i]<<" j:"<<nums[j]<<" count:"<<count<<endl;
                int temp_1=i,temp_j=j;
                while(temp_j<len && nums[temp_j]==nums[i]){
                    cout<<"popping"<<endl;
                    popElem(nums,temp_j,len);
                    len--;
                    printVector(nums,len);
                }
                count=0;i++;j++;
            }
            else{
                // cout<<"i:"<<nums[i]<<" j:"<<nums[j]<<" count:"<<count<<endl;
                i++,j++;count=0;
            }
            cout<<" count:"<<count<<endl;
        }
        return len;
    }
};

int main(){
    Solution sol = Solution();
    vector<int> nums = {1,1,1,1};
    int n = sol.removeDuplicates(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}