#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.size()==1){
            if(gas[0]>=cost[0]) return 0;
            else return -1;
        }
        for(int i=0;i<gas.size();i++){
            gas[i] = gas[i]-cost[i];
        }
        vector<int> p_indexes;
        for(int i=0;i<gas.size();i++){
            if(gas[i]>=0){
                p_indexes.push_back(i);
            }
        }
        for(auto p_index:p_indexes){
            int co=0;
            for(int i=p_index;i<gas.size();i++){
                co += gas[i];
                if(co<0) break;
            }
            if(co<0) continue;;
            for(int i=0;i<p_index;i++){
                co += gas[i];
                if(co<0) break;
            }
            if(co> -1) return p_index;
        }

        return -1;
    }
};

int main(){
    Solution solver = Solution();
    vector<int> gas={2};
    vector<int> cost={2};

    cout<<solver.canCompleteCircuit(gas,cost);
}