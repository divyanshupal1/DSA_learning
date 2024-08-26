#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,2,2,3,4,5,3,4};
    int axor = 0;
    for(int i=0;i<arr.size();i++){
        axor = axor^arr[i];
        cout<<axor<<endl;
    };
    cout<<axor<<"ans";
    
}