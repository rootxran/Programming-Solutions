#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  vector<char> v;
  for(int i = 0; s[i] != '\0'; i++)
  {
    if(s[i] != '+')
    {
      v.push_back(s[i]);
    }
  }
  sort(v.begin(), v.end());
  int count = 1;
  s.clear();
  for(auto it:v)
  {
    s = s + it;
    s = s + '+';
  }
  for(int i = 0; i < s.length() - 1; i++)
  {
    cout << s[i];
  }
}
