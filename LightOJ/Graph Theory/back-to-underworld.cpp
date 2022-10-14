/**
 *    Author:   Shihab
 *    Created:  2022-10-14 22:40:58
 *
 *    Problem:  https://lightoj.com/problem/back-to-underworld
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

#define SIZE 20005
using namespace std;

enum { NOT_VISITED, RED, BLACK };

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt, Case = 1;
  cin >> tt;
  while (tt--) {
    int n, ans = 0;
    cin >> n;
    vector<int> adj[SIZE];
    int color[SIZE];
    memset(color, 0, sizeof(color));
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }

    for (int i = 0; i < SIZE; i++) {
      if (!adj[i].empty() && color[i] == NOT_VISITED) {
        int red = 0, black = 0;
        queue<int> q;
        q.push(i);
        color[i] = RED;
        red++;
        while (!q.empty()) {
          int s = q.front();
          q.pop();
          for (auto u : adj[s]) {
            if (color[u])
              continue;
            q.push(u);
            if (color[s] == RED) {
              color[u] = BLACK;
              black++;
            } else {
              color[u] = RED;
              red++;
            }
          }
        }
        ans += max(red, black);
      }
    }
    cout << "Case " << Case << ": " << ans << '\n';
    Case++;
  }
  return 0;
}
