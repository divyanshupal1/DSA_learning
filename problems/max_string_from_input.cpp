#include<bits/stdc++.h>
using namespace std;

int main(){
    string input = "3323333991333";
    int max = 3;

    unordered_map<int,int> count;
    for(auto i:input){
        count[i-'0']++;
    }
    int j=9;
    string ans;
    while(j>=0){
        if(count[j]==0){
            j--;
            continue;
        };
        for(int i=0;i<max && count[j]>0;i++){
            ans+=to_string(j);
            count[j]--;
        }
        if(count[j]>0){
            int k=j-1;
            while(count[k]==0) k--;
            ans+=to_string(k);
            count[k]--;

        }
        else{
            j--;
        }
    }
    cout<<ans<<endl;

    return 0;
}