#include <bits/stdc++.h>
using namespace std;
int main()
{
  int X = 0;
  string s;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> s;
    if(s[0] == '+')
    {
      ++X;
    }
    else if(s[0] == '-')
    {
      --X;
    }
    else if(s[2] == '+')
    {
      X++;
    }
    else if(s[2] == '-')
    {
      X--;
    }
  }
  cout << X;
}
