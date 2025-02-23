#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='p'){
            s[i]='q';
        }
        else if(s[i]=='q'){
            s[i]='p';
        }

    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
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