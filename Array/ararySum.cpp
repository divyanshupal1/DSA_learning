#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> subarraySum(vector<int>arr, int n, long long s)
{
    vector<int> res={-1};
    long long sum=0;
    int j=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];        
        if(sum>s){            
            while(sum>s && j<i){
                sum-=arr[j];
                j++;
            }
        }
        if(sum==s){
            res[0]=j+1;
            res.push_back(i+1);
            return res;
        }
    };
    return res;
}

int main(){
    int n,temp;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int> arr;    
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    // print(arr);
    vector<int> res = subarraySum(arr,n,sum);
    print(res);
    
    return 0;
}