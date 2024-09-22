#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> chars = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int size = s.size()-1;
        int ans = chars[s[size--]];
        while(size>=0){
            chars[s[size]]<chars[s[size+1]] ? ans-=chars[s[size]] : ans+=chars[s[size]];
            size--;
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    string s = "LVIII";
    cout<<solver.romanToInt(s);
    return 0;
}