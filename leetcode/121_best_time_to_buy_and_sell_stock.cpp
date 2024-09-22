#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,l=prices[0];
        for(auto &i:prices){
            profit=max(profit,i-l);
            l=min(i,l);
        }

        return profit;
        
    }
};


int main () {
    Solution solver = Solution();
    vector<int> prices = {7,1,5,3,6,4};
    cout<<solver.maxProfit(prices);
}