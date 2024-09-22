#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool compareMap(map<char,int> map1,map<char,int> map2){
        for(auto i:map1){
            if(map2[i.first]<i.second) return false;
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        if(s.length()==1 && s.length() == t.length() && s[0]!=t[0] ) return "";
        string ans=s+t;
        map<char,int> count;
        for(auto i:t) count[i]++;
        int l=0,r=0;
        map<char,int> localCount;
        
        while(r>=l && r<=s.size() && l<s.size()){
            // cout<<"start: "<<l<<" "<<r<<" "<<s.substr(l,r-l)<<" "<<localCount.size()<<endl;
            if(localCount.size()==count.size() && compareMap(count,localCount)){
                ans = (ans.length()>r-l) ? s.substr(l,r-l) :ans;
                if(count.find(s[l])!=count.end()){
                    localCount[s[l]]--;
                    if(localCount[s[l]]<=0) localCount.erase(s[l]);
                }
                l++;
            }else{
                if(count.find(s[r])!=count.end()){
                    localCount[s[r]]++;
                }
                r++;
            }
        }
        return ans==s+t?"":ans;
    }
};

int main(){
    Solution solver = Solution();
    string s = "ADOBECODEBANC", t = "ABC";
    cout<<solver.minWindow(s,t)<<endl;
    return 0;
}