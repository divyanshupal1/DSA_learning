#include<bits/stdc++.h>
using namespace std;

int bouquetsPossible(vector<int>& bloomDay,int k,int days){
    int count=0;
    int i=0;
    while(i<bloomDay.size()){        
        if(bloomDay[i]<=days){
            int j=i;
            while(j<i+k && j<bloomDay.size()){
                if(bloomDay[j]>days) break;
                j++;
            }
            if(j==i+k){
                count+=1;
                i=j+1;
            }else i++;         
        } 
        else i++; 
    }
    return count;
}
int minDays(vector<int>& bloomDay, int m, int k) {
        if(m*k>bloomDay.size()) return -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i:bloomDay){
            maxi=max(maxi,i);
            mini=min(mini,i);
        }

        while(maxi>=mini){
            int mid = mini+(maxi-mini)/2;
            int bouquets= bouquetsPossible( bloomDay,k,mid);
            if(bouquets<m) mini=mid+1;
            else maxi=mid-1;
        }
        return mini;
}

int main(){
    vector<int> bloomDay = {1,10,2,9,3,8,4,7,5,6};
    int m = 4, k = 2 ;
    int ans = minDays(bloomDay,m,k);
    // int ans = bouquetsPossible( bloomDay,k,12);
    cout<<ans;
}