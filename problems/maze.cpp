#include<bits/stdc++.h>
using namespace std;

void Solve(int r,int c,string res,vector<vector<int>> maze){
    int n = maze.size()-1;
    if(r==n&&c==n) cout<<res<<endl;
    if(r<n && maze[r+1][c]!=1) Solve(r+1,c,res+"D",maze);
    if( c<n && maze[r][c+1]!=1) Solve(r,c+1,res+"R",maze);
}
void countMaxOne(vector<int> arr){
    int ans = 0,temp = 0;
    for(auto i:arr){
        if(i==1){
            temp++; 
        }
        else{
            if(temp>ans){
                ans=temp;
            }
            temp = 0;
        }
    }
    cout<<ans;
}

int main()
{
    vector<vector<int>> maze = {{0,0,1,0},{0,1,0,0},{0,0,0,0},{0,0,0,0}};
    vector<int> max = {0,1,1,1,1,1,0,0,0,0,1,1,1,1,0};
    Solve(0,0,"",maze);
    // countMaxOne(max);
}