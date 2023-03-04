#include <bits/stdc++.h>
using namespace std;
#define int long long int 
bool isPrime(int k,int n,vector<int> a)
{
    vector<int> v(k,0);
    for(int i=0;i<n;i++)
    {
         v[a[i]%k]++; 
    }
    for(int i=0;i<k;i++)
    {
        if(v[i]<=1)
        return true;
    }
    return false;
}
signed main() {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
    int m=0;
    int x;
    cin>>n>>m;
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    s3=s1,s4=s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s3!=s4)
    cout<<"NO";
    else if(s1==s2||s2.size()>2*m+1)
    cout<<"YES";
    else if(s2.size()<m+1)
    cout<<"NO";
    else {
        int i=n-1-m+1;
        while(i<m)
        {
                if(s2[i]==s1[i])
                i++;
                else{
                        i=-1;
                        break;
                }
        }
        if(i>0)
        cout<<"YES";
        else
        cout<<"NO";
    }
    cout<<endl;
    }
    return 0;
}