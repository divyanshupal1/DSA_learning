#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            if(!iswalnum(s[i])){
                i++;
                continue;
            }
            if(!iswalnum(s[j])){
                j--;
                continue;
            }
            if((char)tolower(s[i])!=(char)tolower(s[j])){
                return false;
            }
            i++;j--;
        }
        return true;        
    }
};

int main(){
    string s = "0P" ;
    Solution solver = Solution();
    cout<<solver.isPalindrome(s)<<endl;
}