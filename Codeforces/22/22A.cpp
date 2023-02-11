#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int> s;
  int n;
  int x;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> x;
    if(x <= 100)
    {
      s.insert(x);
    }
  }
  auto it = s.begin();
  if(s.size() < 2)
  {
    cout << "NO";
  }
  else
  {
    it++;
    cout << *it;
  }
}
