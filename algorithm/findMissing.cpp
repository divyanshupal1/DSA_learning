#include <bits/stdc++.h>
using namespace std;
 
void findMissing(int arr[], int N)
{
    int i;
    int temp[N + 1];
    for(int i = 0; i <= N; i++){
      temp[i] = 0;
    }
   
    for(i = 0; i < N; i++){
      temp[arr[i] - 1] = 1;
    }
 
 
    int ans;
    for (i = 0; i <= N ; i++) {
        if (temp[i] == 0)
            ans = i  + 1;
    }
    cout << ans;
}
void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }    
        if (j == size)
            cout << arr[i] << " ";
  }
}
vector<int> printLeadersOptimised(vector<int> arr){
    int size = arr.size();
    int great=arr[size-1];
    vector<int> ans; 
    ans.push_back(great);
    for(int i = size-2;i>0;i--){
        if(arr[i]>great){
            great=arr[i];
            ans.push_back(great);
        }
    }
    return ans;
}

void maxSum(vector<int> arr){
    int start = 0,end=0,great = 0;
    for(int i=0;i<arr.size();i++){
        int sum = arr[i];
        for(int j=i+1;j<arr.size();j++){
            sum+=arr[j];
            if(sum>great){
                great=sum;
                start = i;
                end = j;
            }
        }        
    }
    cout<<great<<endl;
    for(int i = start;i<=end;i++){
        cout<<arr[i]<<",";
    }
}

int main()
{
    // int arr[] = { 1, 3, 7, 5, 6, 2 };
    vector<int> arr= { 1, -2, 3, -1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // vector<int> ans =  printLeadersOptimised(arr);
    // for(auto i:ans){
    //     cout<<i<<endl;
    // }
    maxSum(arr);
}