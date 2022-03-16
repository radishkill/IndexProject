#include <bits/stdc++.h>
#define INF 0x3f3f3f3f;
using namespace std;
int L[505][505];
int boy[505];
int used[505];
int k, m, n; //可能的组合数k，女生数m，男生数n
bool find(int i)
{
  for (int j = 1; j <= n; j++)
  {
    if (L[i][j] && !used[j])
    { //跟他有关系而且没有搜索过
      used[j] = 1;
      if (!boy[j] || find(boy[j]))
      {
        boy[j] = i;
        return true;
      }
    }
  }
  return false;
}
int main()
{
  while (cin >> k >> m >> n)
  {
    memset(L, 0, sizeof(L));
    memset(boy, 0, sizeof(boy));
    for (int i = 1; i <= k; i++)
    {
      int n1, n2;
      cin >> n1 >> n2;
      L[n1][n2] = 1;
    }
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
      memset(used, 0, sizeof(used));
      if (find(i))
        sum++;
    }
    cout << sum << endl;
  }
  return 0;
}
