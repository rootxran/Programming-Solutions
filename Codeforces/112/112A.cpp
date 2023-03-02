#include <bits/stdc++.h>
using namespace std;
int solve(string s1, string s2)
{
  int check = 0;
  for(int i = 0; i < s1.size(); i++)
  {
    s1[i] = tolower(s1[i]);
    s2[i] = tolower(s2[i]);
  }
  for(int i = 0; i < s1.length(); i++)
  {
    if(s1[i] != s2[i])
    {
      if(s1[i] < s2[i])
      {
        check = -1;
      }
      else
      {
        check = 1;
      }
      break;
    }
  }
  return check;
}
int main()
{
  string s1;
  string s2;
  cin >> s1;
  cin >> s2;
  cout << solve(s1, s2) << endl;
}
