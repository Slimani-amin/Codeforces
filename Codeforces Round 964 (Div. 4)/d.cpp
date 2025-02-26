#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void solve(){
    string t,s;cin>>t>>s;
    int j=0;
    for(int i=0;i<t.size();i++){
        if(j==s.size()){
            continue;
        }
        if(t[i]==s[j]){
            j++;
        }
        else if(t[i]=='?'){
            t[i]=s[j];
            j++;
        }
    }
    if(j==s.size()){
        cout<<"YES"<<endl;
        for(int i=0;i<t.size();i++){
            if(t[i]=='?')t[i]='a';
        }
        cout<<t<<endl;
        return;
    }
    cout<<"NO"<<endl;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}