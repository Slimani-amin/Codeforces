#include <bits/stdc++.h>

using namespace std;




void solve() {

    int n; cin>>n;
    vector<vector<int>> grid;
    for(int i = 0; i < n; i++) {
        vector<int> row;
        string s; cin>>s;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == '1') row.push_back(1);
        }
        if(!row.empty()){
            grid.push_back(row);
        }
    }
     bool square = true;
    for(int i =0;i<grid.size();i++){
        if(grid.size()!=grid[i].size()){
            square = false;
            break;
        }
    }

    if(square){
        cout<<"SQUARE"<<endl;
    }
    else{
        cout<<"TRIANGLE"<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}