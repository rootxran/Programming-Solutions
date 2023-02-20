#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if(m[x] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << x << m[x] << endl;
        }
        m[x]++;
    }
}
