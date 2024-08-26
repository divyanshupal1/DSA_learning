#include<bits/stdc++.h>
using namespace std;

class Solution {
    map<int, int> emptymap = {{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0}};
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, int> mp = emptymap;
        //column check
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mp[board[i][j]]!=0) return false;
                else mp[board[i][j]]=1;
            }
            mp=emptymap;
        }
        //row check
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mp[board[j][i]]!=0) return false;
                else mp[board[j][i]]=1;
            }
            mp=emptymap;
        }
        return true;
    }
};


int main(){
    Solution sol = Solution();
    // vector<vector<string>> board({"5",",","3",",",",",",","7",",",",",",",",",},{"6",",",",",",","1",",","9",",","5",",",",",",",},{",","9",",","8",",",",",",",",",",","6",",",},{"8",",",",",",",",","6",",",",",",",",","3",},{"4",",",",",",","8",",",",","3",",",",",",","1"},{"7",",",",",",",",","2",",",",",",",",","6"},{",","6",",",",",",",",",",","2",",","8",",",},{",",",",",","4",",","1",",","9",",",",",",","5"},{",",",",",",",","8",",",",",",","7",",","9"}) ;
    
    for(int l=0;l<9;l+=3){
        for(int k=0;k<9;k+=3){
            cout<<l<<" "<<k<<"->";
            for(int j=l;j<l+3;j++){
                for(int i=k;i<k+3;i++){
                    cout<<"("<<j<<i<<") ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }

    return 0;
}