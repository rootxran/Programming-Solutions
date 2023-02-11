#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n <1)
    {
        cout << "NO";
    }
    else
    {
        // set <int> s;
        set<int> table;
        int count = 0;
        int x;
        for(int i = 0; i < n * 2; i++)
        {
            cin >> x;
            if(table.find(x) == table.end())
            {
                table.insert(x);
                if(table.size() > count)
                {
                    count = table.size();
                }
            }
            else
            {
                table.erase(x);
            }
        }
        cout << count;
    }
}