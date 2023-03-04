#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int length;
        cin >> length;
        string s;
        cin >> s;
        int ans = length - 1;
        for (int i = 1; i < length - 1; i++)
        {
            char c = s[i];
            if (s[i - 1] == s[i + 1])
            {
                ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}