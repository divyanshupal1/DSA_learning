#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()==1 && needle.size()==1 && haystack==needle) return 0;
        int i=0;
        while(i<haystack.size()-needle.size()){
            if(haystack[i]==needle[0]){
                int j=1;
                while( j<needle.size() && haystack[i+j]==needle[j]) j++;
                if(j==needle.size()) return i;
            }
            i++;
        }
        return -1;
    }
};

int main(){
    string haystack =  "aasaasadbutsad";
    string needle ="sad";

    Solution solver = Solution();
    cout<<solver.strStr(haystack,needle);
    
}