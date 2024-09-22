#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        int wordSize = words[0].size();
        map<string,int> wordsCount;
        for(auto i:words) wordsCount[i]++;
        for(int i=0;i<s.length();i++){
            map<string,int> localMap=wordsCount;
            int j=0;
            for(j;j<words.size();j++){
                if(localMap[s.substr(i+(wordSize*j),wordSize)]>0){
                    localMap[s.substr(i+(wordSize*j),wordSize)]--;
                }
                else break;
            }
            if(j==words.size()) ans.push_back(i);
        }
        return ans;
    }
};

int main(){
    Solution solver = Solution();
    string s = "lingmindraboofooowingdingbarrwingmonkeypoundcake";
    vector<string> words = {"fooo","barr","wing","ding","wing"};

    vector<int> v = solver.findSubstring(s,words);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}