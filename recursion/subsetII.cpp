#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> ans){
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"]";
    }
    cout<<"]"<<endl;
}

void print1D(vector<int> arr){
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  };
  cout<<endl;
}

void subset(int i,vector<int>& arr,vector<vector<int>>& ans,vector<int> temp){
  
  if(i>=arr.size()) {
    ans.push_back(temp);
    return;
  };  
  temp.push_back(arr[i]);
  subset(i+1,arr,ans,temp);

  while(i+1<arr.size() && arr[i]==arr[i+1]) i++;

  temp.pop_back();
  subset(i+1,arr,ans,temp);

}

int main(){
    vector<int> arr = {1,2,3,2};
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans; 
    subset(0,arr,ans,{});
    print(ans);
    return 0;
}