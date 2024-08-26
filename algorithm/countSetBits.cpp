
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int count = 0;
    while(n!=0){
        count=count+(n&1);
        n>>=1;
    }
    cout<<count;    
}