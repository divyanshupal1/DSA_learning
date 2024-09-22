#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if(n==1 && citations[0]==0) return 0;
        if(n==1 && citations[0]!=0) return 1;
        for(int i=0;i<n-1;i++){
            int mini = i;
            for(int j=i+1;j<n;j++){
                if(citations[mini]>citations[j]){
                    mini = j;
                }
            }
            if(mini!=i) swap(citations[i],citations[mini]);
            if(citations[i]>=n-i-1){
                return min(n-i,citations[i]);
            }
            
        }
        return citations[n-1];
    }
};

int main(){
    Solution solver = Solution();
    vector<int> citations ={11,15};
    cout<<solver.hIndex(citations);
    return 0;
}