#include<bits/stdc++.h>
using namespace std;

int countSubStrings(string str, int k) 
{
    int ans = 0;
    int i = 0;
    while(i<=str.length()-k){
        vector<int> mp(25,0);
        int uc=0;
        string temp;
        for(int j=i;j<str.length();j++){
            if(uc>k)break;
            temp+=str[j];
            int idx=str[j]-'a'; 
            if(mp[idx]==0) uc++;
            
            mp[idx]=1;
            if(uc==k){        
                cout<<temp<<endl;     
                ans++;
            }

        }
        i++;
    }
    return ans;
    // Write your code here.
}

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<countSubStrings(s,k);
    return 0;
}