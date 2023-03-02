#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int index;
  int check;
  cin >> n;
  cin >> index;
  int x = 0;
  vector<int> v;  
  for(int i = 0; i < n; i++)
  {
    cin >> check;
    if(check >= 0 && check <= 100)
    {
      v.push_back(check);
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(v[i] > 0 && v[i] >= v[index - 1])
    {
      x++;
    }
  }
  cout << x;
}
