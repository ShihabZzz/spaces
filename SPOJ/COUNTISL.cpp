/**
 *    Author:   Shihab
 *    Created:  2022-10-25 18:59:37
 *
 *    Problem:  https://www.spoj.com/problems/COUNTISL/
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

#define SIZE 201
using namespace std;

int n, m;
char grid[SIZE][SIZE];
bool vis[SIZE][SIZE];
int dx[] = {+1, -1, +1, -1, 0, 0, +1, -1};
int dy[] = {+1, -1, -1, +1, +1, -1, 0, 0};
int ans = 0;

bool valid(int x, int y) {
  if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '#')
    return true;
  return false;
}

void dfs(int x, int y) {
  if (vis[x][y])
    return;
  vis[x][y] = true;
  for (int i = 0; i < 8; i++) {
    int p, q;
    p = x + dx[i];
    q = y + dy[i];
    if (valid(p, q)) {
      grid[p][q] = '.';
      dfs(p, q);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    cin >> n >> m;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++) {
      cin >> grid[i];
    }
    ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == '#') {
          grid[i][j] = '.';
          dfs(i, j);
          ans++;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
