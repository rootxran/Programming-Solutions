#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        int check = 0;
        map<char, int> map1, map2;
        for (int i = 0; i < n; i++)
        {
            map1[s[i]]++;
            map2[t[i]]++;
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (map1[i] != map2[i])
            {
                check = 1;
                break;
            }
        }
        for (int i = 0; i < min(n, k); i++)
        {
            if (n - 1 - i < k)
            {
                if (s[i] != t[i])
                {
                    check = 1;
                    break;
                }
            }
        }
        if (check == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}