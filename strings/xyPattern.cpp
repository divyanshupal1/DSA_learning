#include<bits/stdc++.h>
using namespace std;

bool matchPattern(string s){
    int count = 0;
    char prev;
    for(int i=0;i<s.length();i++){
        if(s[i]=='X'){
            if(prev=='Y'&& count!=0) return false;
            count++;
        }
        else{
            count--;
        };

        prev=s[i];
    }
    return count!=0?false:true;
}

int main(){
    //XXYYXXYYYY --  false
    //XXYYXXYYXY --  true

    string s;
    cin>>s;
    string res = matchPattern(s)?"TRUE":"FALSE";
    cout<<res;
    return 0;
}