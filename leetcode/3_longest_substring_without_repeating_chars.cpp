#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,ans=0;
        map<char,int> count;
        while(r<s.length()){
            if(count[s[r]]==1) count[s[l++]]=0;
            else{
                count[s[r]]=1;
                ans=max(ans,r-l+1);
                r++;
            }
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    string s = "  a " ;
    cout<<solver.lengthOfLongestSubstring(s)<<endl;
    // cout<<'z'-'a';
    return 0;
}