#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();        
        if(n1<n2) return findMedianSortedArrays(nums2,nums1);
        
        int mid = floor((n1+n2)/2)-1;

        int count = 0;

        // while(count<=mid+1){

        // }

        

        return mid;
    }
};


int main(){
    Solution solve = Solution();
    vector<int> nums2 = {3,4,6,7,8,9,11,12};
    vector<int> nums1 = {1,2,20,21,22,23};
    cout<<solve.findMedianSortedArrays(nums1,nums2);
    // cout<<ans;
    return 0;
}


// 1 2 (5) 9 12 13
// 3 6 (7)  8 11

// 1 2 5 3 6 7