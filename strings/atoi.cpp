#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "42";
    int res=0,sign=1,i=0;
    while(s[i]==' ') i++;
    if(s[i]=='-'||s[i]=='+'){
        sign = (s[i++]=='+')?1:-1;
    }    
    while(i<s.length() && (s[i]>='0' && s[i]<='9')){
        int digit = s[i++]-'0';
        if(res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10)){
            cout<< (sign==1)?INT_MAX:INT_MIN;
            return 0;
        }
        res=res*10+digit;
    }
    cout << res*sign;
    return 0;
}