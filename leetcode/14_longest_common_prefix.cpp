#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int poss = strs[0].size();
        string ans;
        for(int i=0;i<poss;i++){
            char temp = strs[0][i];
            for(auto word:strs){
                if(word[i]!=temp) return ans;
            }
            ans+=temp;
        }
        return ans;
    }
};

// optimised solution

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n=strs.size();
//         string s;
//         sort(strs.begin(),strs.end());
//         string one=strs[0];
//         string two=strs[n-1];
//         for(int i=0;i<min(one.size(),two.size());i++)
//         {
//             if(one[i]!=two[i])
            
//                 return s;
//             else
//             s=s+one[i];
//         }
//             return s;
//     } 
// };

int main(){
    Solution solver = Solution();
    vector<string> strs= {"flower","flow","flight"};
    cout<<solver.longestCommonPrefix(strs);
    return 0;
}