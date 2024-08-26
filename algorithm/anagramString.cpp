#include<bits/stdc++.h>
using namespace std;

string sortString(string s){
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    }
    return s;
};

int main(){
    string s1= sortString("abcd");
    string s2= sortString("bcad");
    cout<<(s1==s2);
    return 0;
}