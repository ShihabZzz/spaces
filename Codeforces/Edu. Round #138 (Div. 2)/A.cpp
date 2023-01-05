/**
 *    Author:   Shihab
 *    Created:  2022-10-20 21:32:24
 *
 *    Problem:  https://codeforces.com/contest/1749/problem/A
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      v.push_back({x, y});
    }
    (m < n) ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}