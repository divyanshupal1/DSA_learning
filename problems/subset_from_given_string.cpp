#include<bits/stdc++.h>
using namespace std;

class Solution{
    void printSet(set<string> words){
        set<string>::iterator itr;
        for (itr = words.begin();itr != words.end(); itr++) 
        {
            cout << *itr << " ";
        }
        cout<<endl;
    }
    
    public:
    int countUniqueCombinations(string s){
        set<string> words;
        int i=0;
        while(i<s.length()){
            string initial(1,s[i]);
            string combined(1,s[i]);
            words.insert(initial);
            for(int j=1;j<s.length();j++)
            {
                words.insert(initial+s[(i+j)%s.length()]);
                combined+=s[(j+i)%s.length()];
                words.insert(combined);
            }
            i++;
        }        
        printSet(words);
        return words.size();
    }
};

int main(){
    Solution solver = Solution();
    string s = "abc";
    cout<<solver.countUniqueCombinations(s)<<endl;
    return 0;
}