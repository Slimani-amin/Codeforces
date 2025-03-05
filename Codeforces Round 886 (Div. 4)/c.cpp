#include <bits/stdc++.h>

#define ll long double

using namespace std;




void solve() {
    int indice=-1;
    string ans ="";
    for(int i=1;i<=8;i++){
            string s;cin>>s;
            if(indice==-1){
                for(int j=0;j<8;j++){
                    if(s[j]!='.'){
                        indice=j;
                        ans+=s[j];
                        break;
                    }
                }
            }
            else{
                if(s[indice]!='.'){
                    ans+=s[indice];
                }
            }

        
    }

    cout<<ans<<endl;
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