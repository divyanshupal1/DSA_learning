#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;int j=numbers.size()-1;
        vector<int> ans = {0,0};
        while(i<j){
            if( target > (numbers[i]+numbers[j]) ) i++;
            if( target < (numbers[i]+numbers[j]) ) j--;
            if(target==numbers[i]+numbers[j]){
                ans = {i+1,j+1};
                break;
            }
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> ans = solver.twoSum(numbers,target);
    for(auto i: ans){
        cout<<i<<" ";
    }
}