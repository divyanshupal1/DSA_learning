#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int i=0;
        while(i<words.size()){
            int j=i+1,sum=words[i].size();
            while(j<words.size() && sum+words[j].size()+1<=maxWidth){ 
                sum+=(words[j].size()+1);
                j++;
            };
            int totalSpaces = maxWidth - sum + (j-i) -1;
            int commonSpaces = totalSpaces/max(1,j-i-1);
            int extraSpaces = totalSpaces%max(1,j-i-1);
            int k=i;
            string temp;
            for(k;k<j-1;k++){
                temp+=words[k];
                for(int n=0;n<commonSpaces;n++) temp+=" ";
                if(extraSpaces>0){
                    temp+=" ";
                    extraSpaces--;
                }
            }
            temp+=words[j-1];
            if(j-i==1){for(int n=0;n<commonSpaces;n++) temp+=" ";}
            if(j==words.size()){
                temp="";
                for(int k=i;k<j-1;k++) temp+=words[k]+" ";
                temp+=words[j-1];
                int spaces = maxWidth-temp.length();
                while(spaces>0) {
                    temp+=" ";
                    spaces--;
                }
            }
            ans.push_back(temp);
            i=j;
        }
        
        return ans;
    }
};

int main(){
    vector<string> words = {"Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"};
    int maxWidth=16;
    Solution solver = Solution();
    vector<string> output = solver.fullJustify(words,maxWidth);
    for(auto i:output){
        cout<<"'"<<i<<"'"<<endl;
    }
    return 0;
}