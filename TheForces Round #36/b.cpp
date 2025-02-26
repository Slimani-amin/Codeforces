#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    int x,y,z;cin>>x>>y>>z;
    if(z>x){
        cout<<0<<endl;
    }
    else{
    vector<vector<int>> list;
    vector<int> intrev(x,y);
    int cmpt = 0;
    vector<int> temp;
    while(intrev[x-1]!=0){
    for(int i=0;i<x;i++){
        if(intrev[i]!=0){
            cmpt++;
            temp.push_back(i+1);
            intrev[i]--;
        }
        if(cmpt==z){
            list.push_back(temp);
            temp.clear();
            cmpt=0;
        }
            
        }
    }
     cout<<list.size()<<endl;
     for(int i=0;i<list.size();i++){
         for(int j=0;j<list[i].size();j++){
             cout<<list[i][j]<<" ";
         }
         cout<<endl;
        }

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