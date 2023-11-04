#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
       int temp=nums[0];
       int pointer = 1;
       for(auto i : nums){
        if(i!=temp){
            nums[pointer]=i;
            pointer++;
            temp=i;
        }
       }
       return pointer;
}

int main(){
    int n;
    cin>>n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }
    int unique = removeDuplicates(ans);
    cout<<unique<<endl;
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    
    

    return 0;
}
