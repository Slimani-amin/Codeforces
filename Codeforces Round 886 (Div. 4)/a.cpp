#include <bits/stdc++.h>

#define ll long double

using namespace std;




void solve() {
    int a,b,c; cin>>a>>b>>c;
    if(a+b>=10 || a+c>=10 || b+c>=10){
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