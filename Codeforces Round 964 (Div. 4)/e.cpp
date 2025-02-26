#include <bits/stdc++.h>
#define ll long long int
using namespace std;




vector<ll>pre(2000010);

void solve(){
    vector<ll>v;
    ll l,r;cin>>l>>r;
    cout<<pre[r]-2*pre[l-1]+pre[l]<<endl;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    for(ll i=1;i<=2000005;i++){
        ll cnt=0;
        ll tmp=i;
        while(tmp){
            tmp/=3;
            cnt++;
        }
        pre[i]=pre[i-1]+cnt;
    }
    while(t--){
        solve();
    }
    return 0;
}