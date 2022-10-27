/**
 *    Author:   Shihab
 *    Created:  2022-10-27 21:20:16
 *
 *    Problem:  https://lightoj.com/problem/equalizing-money
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

#define SIZE 1005
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  for (int c = 1; c <= tt; c++) {
    int n, m, sum = 0;
    cin >> n >> m;
    vector<int> p(SIZE);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        sum += p[i];
    }
    vector<int> adj[SIZE];
    for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    if (sum % n) {
      cout << "Case " << c << ": No\n";
      continue;
    }
    int avg = sum / n;
    bool ans = true;
    bool process[SIZE];
    memset(process, false, sizeof(process));
    queue<int> q;

    for (int i = 0; i < SIZE; i++) {
      if (!adj[i].empty() && !process[i]) {
        int cost = 0, pep = 0;
        process[i] = true;
        q.push(i);
        while (!q.empty()) {
          int a = q.front();
          q.pop();
          pep++;
          cost += p[a];
          for (auto u : adj[a]) {
            if (process[u])
              continue;
            process[u] = true;
            q.push(u);
          }
        }
        if (avg * pep != cost) {
          ans = false;
          break;
        }
      }
    }
    (ans) ? cout << "Case " << c << ": Yes\n"
          : cout << "Case " << c << ": No\n";
  }
  return 0;
}
