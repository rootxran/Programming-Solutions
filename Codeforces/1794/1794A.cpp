#include <bits/stdc++.h>
using namespace std;
int main()
{
  int l;
  cin >> l;
  set<char> s;
  vector<string> v;
  // string s1;
  // string s2;
  // string s3;
  // string s4;
  // cin >> s1;
  // cin >> s2;
  // cin >> s3;
  // cin >> s4;
  // cout << s1 << s2 << s3 << s4;
  for(int i = 0; i < 2l - 2; i++)
  {
    string s;
    cin >> s;
    v.push_back(s);
    s.clear();
  }
  cout << v.size();
  string sc;
  for(int i = 0; i < v.size(); i++)
  {
    sc = v[i];
    for(int j = 0; sc[j] != '\0'; j++)
    {
      s.insert(sc[j]);
    }
  }
  cout << s.size();
  for(auto it: s)
  {
    cout << it << " ";
  }
}
