#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isSubsequence(string s, string t) {
            if(s.length()==0) return true;
            int i=0;
            for(i;i<t.length();i++){
                if(s[0]==t[i]){
                    int j=1,k=i+1;
                    while(j<s.length()&& k<t.length()){
                        if(s[j]==t[k]){
                            j++;k++;
                        }
                        else k++;
                    }
                    cout<<j<<endl;
                    if(j==s.length()) return true;
                }
            }
            return false;
        }
};
int main(){
    string s="abc",t="ahbgdg";
    Solution solver = Solution();
    cout<<solver.isSubsequence(s,t);
}