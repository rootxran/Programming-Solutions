#include <bits/stdc++.h>
using namespace std;
void check()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 0;
    bool first_found = false;
    for(int i = 0; i < (n - 1)/2 + (n % 2 == 0); i++)
    {
        if(s[i] != s[n - 1 - i])
        {
            if(i != 0 && p != i - 1 && first_found)
            {
                cout << "No" << endl;
                return;
            }
            if(!first_found)
            {
                first_found = true;
            }
            p = i;
        }
    }
    cout << "Yes" << endl;
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