/**
 *    Author:   Shihab
 *    Created:  2023-01-16 20:20:54
 *
 *    Problem:  https://codeforces.com/problemset/problem/244/A
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  vector<int> ch[40];
  bool process[905];
  memset(process, 0, sizeof(process));
  for (int i = 1; i <= k; i++) {
    int x;
    cin >> x;
    ch[i].push_back(x);
    process[x] = true;
  }
  int p = 1;
  for (int i = 1; i <= k; i++) {
    for (int j = 1; j < n; j++) {
      while (process[p])
        p++;
      ch[i].push_back(p);
      process[p] = true;
    }
  }
  for (int i = 1; i <= k; i++) {
    for (auto x : ch[i])
      cout << x << ' ';
    cout << '\n';
  }
  return 0;
}