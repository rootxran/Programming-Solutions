#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int x = 0;
  int in;
  int check = 0;
  for(int i = 0; i < n; i++)
  {
    x = 0;
    for(int j = 0;j < 3; j++) 
    {
      cin >> in;
      if(in)
      {
        x++; 
      }
    }
    if(x >= 2)
    {
      check++;
    }
  }
  cout << check;
}
