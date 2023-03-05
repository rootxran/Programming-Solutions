#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]==1?a[i]++:a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        (a[i+1]%a[i]!=0)?a[i+1]:a[i+1]++;
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " \n"[i==n-1];
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}