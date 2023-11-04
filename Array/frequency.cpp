#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    unordered_map<int,int> freq;
    for (auto i : nums)
    {
        freq[i]++;
    }

    for( auto i : freq){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    

    return 0;
}
