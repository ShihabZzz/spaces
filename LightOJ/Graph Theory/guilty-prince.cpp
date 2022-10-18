/**
 *    Author:   Shihab
 *    Created:  2022-10-17 01:50:36
 *
 *    Problem:  https://lightoj.com/problem/guilty-prince
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

#define SIZE 21
using namespace std;

int dx[] = {+1, -1, 0, 0};
int dy[] = {0, 0, +1, -1};
int ans, Case = 1;
int w, h;
bool fl[SIZE][SIZE];
char ch[SIZE][SIZE];

bool valid(int x, int y) {
  if (x >= 0 && x < h && y >= 0 && y < w && ch[x][y] != '#' && !fl[x][y])
    return true;
  return false;
}

void dfs(int x, int y) {
  fl[x][y] = 1;
  ans++;
  for (int i = 0; i < 4; i++) {
    int p, q;
    p = x + dx[i];
    q = y + dy[i];
    if (valid(p, q)) {
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
    cin >> w >> h;
    for (int i = 0; i < h; i++)
      cin >> ch[i];
    memset(fl, 0, sizeof(fl));
    ans = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (ch[i][j] == '@') {
          dfs(i, j);
          break;
        }
      }
    }
    cout << "Case " << Case << ": " << ans << '\n';
    Case++;
  }
  return 0;
}