#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0,j=height.size()-1;
        while(i<=j){
            ans=max(ans,(j-i)*min(height[i],height[j]));
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout<<solver.maxArea(heights)<<endl;;
    return 0;
}