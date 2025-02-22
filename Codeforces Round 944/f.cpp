#include <bits/stdc++.h>

#define ll long double

using namespace std;




void solve() {
    ll r; cin >>r;
    int ans=0;
    for(int i=r;i>0;i--){
        if(sqrtl(r*r+i*i)<r+1){
            ans=i;
            break;
        }
    }
    if(ans==r){
        cout<<ans*8<<endl;
    }
    else{
        cout<<(ans)*8+4<<endl;
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