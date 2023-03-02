#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 5;
  pair<int, int> p;
  int m[n][n];
  int moves = 0;
  for(int i = 0; i < n; i++)
  {
 //   scanf("%d %d %d %d %d", m[i][0], m[i][1], m[i][2], m[i][3], m[i][4]);
    for(int j = 0; j < n; j++)
    {
      cin >> m[i][j];
      if(m[i][j] == 1)
      {
        p = {i+1, j+1};
      }
    }
  }
  if(p.first >= 3)
  {
    moves = moves + (p.first - 3);
  }
  else
  {
    while(p.first != 3)
    {
      p.first++;
      moves++;
    }
  }
  if(p.second >= 3)
  {
    moves = moves + (p.second - 3);
  }
  else
  {
    while(p.second != 3)
    {
      p.second++;
      moves++;
    }
  }
  cout << moves;
}
