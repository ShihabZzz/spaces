/**
 *    Author:   Shihab
 *    Created:  2022-12-24 18:35:40
 *
 *    Problem:  https://atcoder.jp/contests/abc283/tasks/abc283_b
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v) {
    cin >> x;
  }
  int q;
  cin >> q;
  while (q--) {
    int a, k, x;
    cin >> a >> k;
    if (a == 1) {
      cin >> x;
      v[k - 1] = x;
    } else
      cout << v[k - 1] << '\n';
  }
  return 0;
}