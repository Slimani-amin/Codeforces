#include <bits/stdc++.h>

using namespace std;




void solve() {
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(b<a){
        swap(a,b);
    }
    if(d<c){
        swap(d,c);
    }
    if(a>c && a<d && b>d){
        cout<<"YES\n";
    }
    else if(b>c && b<d && a<c){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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