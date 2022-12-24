/**
 *    Author:   Shihab
 *    Created:  2022-12-24 17:55:43
 *
 *    Problem:  https://atcoder.jp/contests/abc283/tasks/abc283_a
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long a, b;
  cin >> a >> b;
  long long ans = 1;
  for (int i = 1; i <= b; i++) {
    ans = ans * a;
  }
  cout << fixed << ans << '\n';
  return 0;
}