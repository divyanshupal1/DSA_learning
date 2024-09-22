#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // string convert(string s, int numRows) {
    //     if(numRows<=1) return s;
    //     vector<vector<char>> zigzag(numRows);
    //     int i=0;
    //     while(i<s.size()){
    //         for(int j=0;j<numRows && i<s.size();j++) zigzag[j].push_back(s[i++]);
    //         for(int j=numRows-2;j>0 && i<s.size();j--) zigzag[j].push_back(s[i++]);
    //     }
    //     string ans;
    //     for(auto i:zigzag){
    //         for(auto j:i){
    //             ans+=j;
    //         }
    //     }        
    //     return ans;
    // }

    // optimizes sol
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        int N = s.size(), d = (numRows - 1) * 2;
        string ans;
        for (int i = 0; i < numRows; ++i) {
            int w = 2 * i;
            for (int j = i; j < N;) {
                cout<<w<<"<-w d->"<<d<<" j->"<<j<<endl;
                ans += s[j];
                w = d - w;
                if (!w) w = d;
                j += w;
            }
        }
        return ans;
    }
};

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    Solution solver = Solution();
    cout<<solver.convert(s,numRows);
    // "PAHNAPLSIIGYIR"
}