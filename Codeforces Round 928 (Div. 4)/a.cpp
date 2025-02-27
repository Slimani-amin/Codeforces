#include <bits/stdc++.h>

using namespace std;




void solve() {
    string s; cin>>s;
    int a,b;
    a = 0;
    b = 0;
    for (int i = 0; i<5;i++){
        if (s[i] == 'A'){
            a++;
        }
        else{
            b++;
        }
        if(a>=3){
            cout<<"A"<<endl;
            break;
        }
        if(b>=3){
            cout<<"B"<<endl;
            break;
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