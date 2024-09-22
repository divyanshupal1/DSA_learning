#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> candies(ratings.size(),1);

            for(int i=1;i<n;i++){
                if(ratings[i-1]<ratings[i]){
                    candies[i]=candies[i-1]+1;
                }
            }
            for(int i=n-1-1;i>=0;i--){
                if(ratings[i]>ratings[i+1]){
                    candies[i]=max(candies[i+1]+1,candies[i]);
                }
            }

        
        // for(auto i:candies) cout<<i<<" ";
        
        int sum=accumulate(candies.begin(),candies.end(),0);
        return sum;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> ratings = {1,3,4,5,2};
    cout<<solver.candy(ratings);

}