#include<bits/stdc++.h>
using namespace std;

int main(){

    int ac=-45;

    auto add = [ac](int a,int b){
        return a+b-ac;
    };

    cout<<add(5,6);

    return 0;
}