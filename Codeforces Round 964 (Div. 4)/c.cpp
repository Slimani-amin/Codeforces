#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {

    ll n,s,m;
    cin >> n >> s >> m;
    ll l=0,r=0;
    bool exist = false;
    vector<pair<int ,int>> inter;
    for(ll i=0;i<n;i++){
        
        cin>>l>>r;
        inter.push_back({l,r});

    } 


    sort(inter.begin(), inter.end());

    if(inter.front().first>=s){
        exist = true;
    }
    else if(m-inter.back().second>=s){
        exist = true;


    }

    else{
        for(ll i = 1;i<n;i++){
            if(inter[i].first-inter[i-1].second>=s){
                exist = true;
                break;
            }
        }
    }



    if(exist){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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