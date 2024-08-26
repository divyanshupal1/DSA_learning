#include<bits/stdc++.h>
using namespace std;

int * helper(string s,int st,int en,int* arr){
    int size = s.length();
    int res[2];
    while(st>=0 && en<size && s[st]==s[en]){
        arr[0]=st;
        arr[1]=en-st+1;
        st--,en++;              
    }
    return res;
}

string longestPalindrome(string s) {
    int size = s.length();
    if(size==1) return s;
    int ans[2] = {0,0};
    int i=0;
    int temp[2];
    while(i+1<=size && i<=size-1){
        if(s[i]==s[i+1]){
            helper(s,i,i+1,temp);
            if(temp[1]>ans[1]){
                ans[0]=temp[0];
                ans[1]=temp[1];
            }
        };
        if(i-1>=0 && s[i-1]==s[i+1]){
            helper(s,i-1,i+1,temp);  
            if(temp[1]>ans[1]){
                ans[0]=temp[0];
                ans[1]=temp[1];
            }
        }
        i++;
    }
    return s.substr(ans[0],ans[1]);        
};

int main(){
    cout<<longestPalindrome("babad")<<" ans";
    int ans = 5<<2;
    cout<<ans<<endl;
    return 0;
}