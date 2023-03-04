#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve() {
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,ll>map1,map2;
    ll ans=0;
    for(auto x: s){
        if(isupper(x)) map1[x]++;
        else map2[x]++;
    }
    for(auto x: map1){
        char c=tolower(x.first);
        while(map2.find(c)!=map2.end() and map2[c]>0 and map1[x.first]>0) {
            ans++;
            map2[c]--;
            map1[x.first]--;
        }
        while(map1[x.first]>=2 and k>0){
            k--;
            ans++;
            map1[x.first]-=2;
        }
    }
    
    for(auto x: map2){
        while(map2[x.first]>=2 and k>0){
            k--;
            ans++;
            map2[x.first]-=2;
        }
    }
    
    cout<<ans<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}