#include<bits/stdc++.h>
using namespace std;

class Solution {
    string helper(int& val,int sub,string symbol){
        string ans="";
        while(val>=sub){
            val-=sub;
            ans+=symbol;
        }
        return ans;
    }
public:
    string intToRoman(int num) {
        string ans;
        map<int,string> sub_fomrs = {
            {4,"IV"},
            {9,"IX"},
            {40,"XL"},
            {90,"XC"},
            {400,"CD"},
            {900,"CM"},
        };
        int pos = 10;
        while(num/pos>10) pos*=10;
        while(pos!=0){
            int digit = num/pos;
            int val = digit*pos;
            num -= digit*pos;
            if(sub_fomrs[digit]==""){  
                while(val>0){              
                    if(val>=1000){
                        ans += helper(val,1000,"M");
                    }
                    else if(val>=500){
                        ans += helper(val,500,"D");
                    }
                    else if(val>=100){
                        ans += helper(val,100,"C");
                    }
                    else if(val>=50){
                        ans += helper(val,50,"L");
                    }
                    else if(val>=10){
                        ans += helper(val,10,"X");
                    }
                    else if(val>=5){
                        ans += helper(val,5,"V");
                    }
                    else{
                        ans += helper(val,1,"I");
                    };
                }
            }else{
                ans += sub_fomrs[val];
            }
            pos=pos/10;
        }
        return ans;    
    }
};

int main(){
    Solution solver = Solution();
    int num = 3749;
    cout<<solver.intToRoman(num);
}