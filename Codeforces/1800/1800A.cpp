#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int l;
  string s;
  string cs = "meow";
  cin >> l;
  cin >> s;
  unordered_set<char> st;
  for(int i = l - 1; i >= 0; i--)
  {
    st.insert(tolower(s[i]));
  }
  int check = 1;
  if(st.size() == 4)
  {
      int i = 0;
      for(auto it: st)
      {
        if(it != tolower(cs[i]))
        {
          check = 0;
        }
        i++;
      }
  }
  else
  {
    check = 0;
  }
  if(check)
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
  int k;
  cin >> k;
  while(k--)
  {
    solve();
  }
}
