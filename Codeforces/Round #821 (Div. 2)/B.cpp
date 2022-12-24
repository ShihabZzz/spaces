/**
 *    Author:   Shihab
 *    Created:  2022-10-04 23:20:23
 *
 *    Problem:  https://codeforces.com/problemset/problem/1733/B
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
    int n, x, y;
    cin >> n >> x >> y;

    if (x > y)
      swap(x, y);
    if (x || !y || ((n - 1) % y)) {
      cout << -1 << "\n";
      continue;
    }
    for (int i = 2; i <= n; i += y) {
      for (int j = 1; j <= y; j++)
        cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}