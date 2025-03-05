#include <bits/stdc++.h>

using namespace std;




void solve() {
    int n;cin>>n;
    int max =0;
    int indiceMax = 0;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        int b;cin>>b;
        if(a<=10 && b>max){
            max = b;
            indiceMax = i;
        }
    }

    cout<<indiceMax<<endl;
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