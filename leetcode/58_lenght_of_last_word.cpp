#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size()-1;
        while(s[size]==' ') size--;
        int ans=0;
        while(s[size]!=' '){
            ans++;
            size--;
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    string s = "   fly me   to   the moon  ";
    cout<<solver.lengthOfLastWord(s);
}