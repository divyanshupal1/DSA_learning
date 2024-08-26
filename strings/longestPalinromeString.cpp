#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str){
    int s=0,e=str.length()-1;
    while(s<e){
        if(str[s++]!=str[e--]) return false;        
    }
    return true;
}

string longestPalindrome(string s)
{
    string ans;
    for(int i=0;i<s.length()-2;i++){
        string temp(1,s[i]);
        for(int j=i+1;j<s.length();j++){
            temp+=s[j];
            cout<<temp<<endl;
            if(palindrome(temp)){                
                ans=(temp.length()>ans.length())?temp:ans;
            }
        }
    }
}

int main()
{
    string s = "babad";
    cout<<longestPalindrome(s);
    return 0;
}