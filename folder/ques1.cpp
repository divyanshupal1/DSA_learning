#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int> (n));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int ans = -1e9;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int r = i, c = j;
            int res = 0;
            while(r < n && c < n){
                res += a[r][c];
                r++;
                c++;
                ans = max(ans, res);
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}