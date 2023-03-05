#include<bits/stdc++.h> 
using namespace std; 
 
void solve(){ 
 
int n; 
    cin>>n; 
    int a[n]; 
    queue<int>q; 
   
    for(int i=0;i<n;i++){ 
        cin>>a[i]; 
    } 
    for(int i=0;i<n;i++){ 
         
         
        q.push(a[i]); 
        while(q.front()<q.size()){ 
            q.pop(); 
        } 
        cout<<q.size()<<" "; 
    } 
    cout<<endl; 
 
} 
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
 
        solve(); 
    } 
 
}