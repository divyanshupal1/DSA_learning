#include<bits/stdc++.h>
using namespace std;

pair<string, string> divideStrings(const string& dividend, const string& divisor) {
    string quotient = "";
    string remainder = dividend;
    while (remainder.substr(0, divisor.length()) == divisor) {
        quotient += divisor;
        remainder = remainder.substr(divisor.length());
    }
    return { quotient, remainder };
}

string gcdOfStrings(string str1, string str2) {
    if(str2>str1){
        swap(str2,str1);
    };
    string dividend=str1,divisor=str2;
    while(divisor.length()!=0){
        auto result = divideStrings(dividend, divisor);
        if(result.second==dividend) return "";
        dividend=divisor;
        divisor=result.second;
    }
    return dividend;
};


int main(){
    string str1="leet",str2="code";
    cout<<gcdOfStrings(str1,str2);
}