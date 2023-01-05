/**
 *    Author:   Shihab
 *    Created:  2023-01-05 21:26:46
 *
 *    Problem:  https://codeforces.com/contest/1768/problem/B
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
      cin >> x;
    }
    if (is_sorted(v.begin(), v.end())) {
      cout << 0 << '\n';
      continue;
    }

    int cnt = 0;
    int ok = 1;

    for (int i = 0; i < n; i++) {
      if (v[i] == ok) {
        cnt++;
        ok++;
      }
    }
    cnt = abs(cnt - n);
    if (!(cnt % k))
      cout << (cnt / k) << '\n';
    else
      cout << (cnt / k) + 1 << '\n';
  }
  return 0;
}