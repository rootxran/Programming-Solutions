#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l;
    string s;
    string temp;
    string p;
    int check = 0;
    cin >> t;
    while(t-- > 0)
    {
        cin >> l;
        cin >> s;
        for(int i = 0; i < l; i++)
        {
            temp = s;
            for(int j = 0; j < l -i - 1; j++)
            {
                if(temp[j] == '0')
                {
                    temp[j] = '1'; 
                }
                else
                {
                    temp[j] = '0';
                }
            }
            p = temp;
            reverse(p.begin(), p.end());
            if(p == temp)
            {
                check = 1;
                break;
            }
        }
        if(check == 1)
        {
            cout << "Yes" << endl;
            check = 0;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}