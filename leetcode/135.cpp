#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> candy(vector<int>& ratings) {
        vector<int> candy(ratings.size(),1);
        for(int i=0;i<ratings.size()-1;i++){
            if(ratings[i]>ratings[i+1]) candy[i]=max(candy[i+1],candy[i])+1;
        }
        for(int i=ratings.size()-1;i>0;i--){
            if(ratings[i]>ratings[i-1]) candy[i]=max(candy[i-1],candy[i])+1;
        }

        return candy;
    }
};

int main(){
    Solution sol = Solution();
    vector<int> nums = {1,2,87,87,87,2,1};
    vector<int> n = sol.candy(nums);
    int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=n[i];
        cout<<n[i]<<" ";
    }
    cout<<endl<<sum<<endl;

}

//  1 0 3