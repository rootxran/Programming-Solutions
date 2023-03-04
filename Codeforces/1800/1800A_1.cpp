#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll m=0,e=0,o=0,w=0;
    ll index=0;
    if(s[index]=='m' or s[index]=='M')
    while((s[index]=='m' or s[index]=='M') and index<n){
        m=1;
        index++;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    if(s[index]=='e' or s[index]=='E')
    while((s[index]=='e' or s[index]=='E') and index<n){
        e=1;
        index++;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    if(s[index]=='o' or s[index]=='O')
    while((s[index]=='o' or s[index]=='O') and index<n){
        o=1;
        index++;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    if(s[index]=='w' or s[index]=='W')
    while((s[index]=='w' or s[index]=='W') and index<n){
        w=1;
        index++;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    
    if(m==1 and e==1 and o==1 and e==1 and index==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}