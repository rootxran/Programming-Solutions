#include <bits/stdc++.h>
using namespace std;
void check()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int g = gcd(v[i], v[j]);
            if(g == 1 || g == 2)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check();
    }
}