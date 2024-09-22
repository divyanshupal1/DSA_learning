#include<bits/stdc++.h>
using namespace std;

class Solution {
    void removeExtraSpacesInPlace(std::string& str) {
        int n = str.length();
        int i = 0, j = 0;
        while (i < n && str[i] == ' ') {
            i++;
        }
        while (i < n) {
            if (str[i] != ' ') {
                str[j++] = str[i++];
            } 
            else {
                str[j++] = ' ';
                while (i < n && str[i] == ' ') {
                    i++;
                }
            }
        }
        if (j > 0 && str[j - 1] == ' ') {
            j--;
        }
        str.resize(j);
    }
    void reverse(int i,int j,string& s){
        while(i<=j) swap(s[i++],s[j--]);
    }
public:
    string reverseWords(string s) {
        removeExtraSpacesInPlace(s);

        int j=s.size()-1;
        while(j>=0){
            int i=j;
            while(i>=0 && s[i]!=' ') i--;
            reverse(i+1,j,s);
            j=i-1;
        }
        reverse(0,s.size()-1,s);
        return s;
    }
};

int main(){
    Solution solver = Solution();
    string s = "  hello world  ";
    cout<<solver.reverseWords(s);
}