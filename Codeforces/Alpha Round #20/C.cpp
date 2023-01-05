/**
 *    Author:   Shihab
 *    Created:  2022-11-17 14:53:13
 *
 *    Problem:  https://codeforces.com/contest/20/problem/C
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

#define SIZE 100005
long long INF = 1LL << 62;
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> adj[SIZE];
  for (int i = 0; i < m; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    adj[a].push_back({b, w});
    adj[b].push_back({a, w});
  }
  bool process[SIZE] = {false};
  vector<long long> dist(SIZE, INF);
  vector<int> path(n + 1, 0);
  priority_queue<pair<long long, int>> q;
  dist[1] = 0;
  q.push({0, 1});
  while (!q.empty()) {
    int a = q.top().second;
    q.pop();
    if (process[a])
      continue;
    process[a] = true;
    for (auto u : adj[a]) {
      int b = u.first, w = u.second;
      if (dist[a] + w < dist[b]) {
        dist[b] = dist[a] + w;
        q.push({-dist[b], b});
        path[b] = a;
      }
    }
  }
  if (!process[n])
    cout << -1 << '\n';
  else {
    vector<int> parent;
    int way = n;
    while (true) {
      parent.emplace_back(way);
      if (way == 1)
        break;
      way = path[way];
    }

    for (int i = parent.size() - 1; i >= 0; i--) {
      cout << parent[i] << " ";
    }
  }
  return 0;
}