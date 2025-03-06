#include <bits/stdc++.h>

#define ll long long

using namespace std;




void solve() {
    ll n,k;cin>>n>>k;
    queue<ll>q;
    q.push(n);
    if(k%2==0 && n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    vector<ll>ans1;
    vector<ll>ans2;
    ll a=1;
    ll cnt=0;
    for(int i=0;i<k-1;i++){
        ans1.push_back(a);
        cnt+=a;
    }
    ans1.push_back(n-cnt);
    a=2;
    cnt=0;
    for(int i=0;i<k-1;i++){
        ans2.push_back(a);
        cnt+=a;
    }
    ans2.push_back(n-cnt);
    if(ans1.back()>0 && ans1.back()%2==1){
        cout<<"YES"<<endl;
        for(auto x:ans1)cout<<x<<" ";
        cout<<endl;
        return;
    }
    if(ans2.back()>0 && ans2.back()%2==0){
        cout<<"YES"<<endl;
        for(auto x:ans2)cout<<x<<" ";
        cout<<endl;
        return;
    }
    cout<<"NO"<<endl;
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