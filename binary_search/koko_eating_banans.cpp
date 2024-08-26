#include<bits/stdc++.h>
using namespace std;

int hours(vector<int> arr,int k){
    int t=0;
    for(auto i:arr){
        t+= ceil((double)(i) / (double)(k));
    }
    return t;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int max = *max_element(piles.begin(),piles.end());
    int min = 1;
    while(max>=min){    
        int mid = (max+min)/2;
        int t = hours(piles,mid);
        cout<<max<<" "<<mid<<" "<<min<<" t->"<<t<<endl;
        if(t<=h){
            max=mid-1;
        }else{
            min=mid+1;
        }
    }
    return min;
}


int main(){
    vector<int> piles = {805306368,805306368,805306368};
    int h = 1000000000;
    int res = minEatingSpeed(piles,h);
    cout<<"result:"<<res<<endl;
}