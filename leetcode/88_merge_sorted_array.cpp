#include<bits/stdc++.h>
using namespace std;

class Solution {
    void insertAtIndex(vector<int>& arr,int i,int data){
        int n=arr.size()-1;
        while(i<n){
            arr[n]=arr[n-1];
            n--;
        }
        arr[i]=data;
    }
public:
    //my approach
    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     vector<int> sorted;
    //     int i=0,j=0;
    //     while(i<m+n && j<n){
    //         if(nums1[i]>=nums2[j] || (nums1[i]==0 && i>=m+j)){
    //             cout<<i<<" "<<j<<" "<<endl;
    //             insertAtIndex(nums1,i,nums2[j]);
    //             i++;j++;
    //         }
    //         else i++;
    //         for(auto i:nums1){
    //             cout<<i<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    
    //optimized logic:- determining the actual position of the last elements
    // of both the arrays in the combined array
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k = m+n-1;

        // beacuse untill we do not reach the first elemt 
        //of the second array  this means some elemets are still 
        //remaining to be merged with array1 
        while(j>=0) 
        {
            if(i>=0 && nums1[i] > nums2[j]){
                nums1[k--]=nums1[i--];
                // current element of the array 1 goes at the last position
                // k keeps track of the actual position of 
                // the next smallest element among the last element of both the arrays
            }
            else{
                nums1[k--]=nums2[j--];
                //if the current elem of aar1 is not bigger then the
                // current elem of aar2 should go to the position of k
            }

        }
    }    
};

int main(){
    Solution s = Solution();
    vector<int> nums1({-1,0,0,0,3,0,0,0,0,0,0});
    vector<int> nums2({-1,-1,0,0,1,2});

    s.merge(nums1,5,nums2,6);

    for(auto i:nums1){
        cout<<i<<" ";
    }

    //expected output: [-1,-1,-1,0,0,0,0,0,1,2,3]
}
