#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size(),l_max=height[0],r_max=height[size-1],ans=0,l=1,r=size-1;
        while(l<=r){
            if(l_max<r_max){
                l_max>height[l] ? ans+=(l_max-height[l]) : l_max=height[l] ;
                l++;
            }
            else{
                r_max>height[r] ? ans+=(r_max-height[r]) : r_max=height[r] ;
                r--;
            }
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> height = {4,2,0,3,2,5};
    cout<<solver.trap(height);
    return 0;
}