#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> strings(2 *(n -1));
    for(int i = 0; i < 2 *(n - 1); i++)
    {
        cin >> strings[i];
    }
    vector<string> s;
    for(int i = 0; i < 2 * (n - 1); i++)
    {
        if(strings[i].size() == n - 1)
        {
            s.push_back(strings[i]);
        }
    }
    if(s[0].substr(1) != s[1].substr(0, n-2))
    {
        swap(s[0], s[1]);
    }
    string t = s[0] + s[1][n - 2];
    string revstring = t;
    reverse(revstring.begin(), revstring.end());
    if(t == revstring)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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