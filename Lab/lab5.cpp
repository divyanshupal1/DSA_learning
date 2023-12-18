#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
}

void selectionSort(vector<int> &arr, int n)
{
    int i, j, min_idx; 
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

int binarySearch(vector<int> arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1; 
        else
            r = m - 1;
    }
    return -1;
}
 
int main(){
    vector<int> arr;
    int size,key;
    cin>>size;
    while(size>0){
        int temp;
        cin>>temp;
        arr.push_back(temp);
        size--;
    }
    cin>>key;
    selectionSort(arr,arr.size());
    print(arr);
    int result = binarySearch(arr, 0, arr.size() - 1, key);
    cout<<endl<<"element fount at : "<<result;    
    return 0;
}