#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(auto i:arr){
        cout<<i<<" ";
    }

}

void removeDuplicate(vector<int> &arr){
  unordered_map<int,int> map;
  for(int i=0;i<arr.size()-1;i++){
    if(map.find(arr[i])==map.end()){
        map[arr[i]] = 1;
        cout<<arr[i]<<endl;
    }
    else{
        for(int j = i;j<arr.size()-1;j++ ){
            arr[j]=arr[j+1];
        }    
    }
  }
  
}


int main(){
    vector<int> arr;
    int size;
    cin>>size;
    while(size>0){
        int temp;
        cin>>temp;
        arr.push_back(temp);
        size--;
    }
    removeDuplicate(arr);
    print(arr);
    
    
    return 0;
}