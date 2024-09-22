#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 = {47,11,30,22};
    vector<int> arr2 = {47,22,30,11};
    int n=4;

    int ans=0,j=0;
    for(int i=0;i<n;i++){
        int temp=0;
        for(int k=0;k<n;k++){
            if(arr1[k]==arr2[(j+k)%n]) temp++;
        }
        ans=max(ans,temp);
        j++;
    }
    
    cout<<ans;
}