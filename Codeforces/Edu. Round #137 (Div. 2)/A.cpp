/**
 *    Author:   Shihab
 *    Created:  2022-10-17 20:34:46
 *
 *    Problem:  https://codeforces.com/contest/1743/problem/0
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
      cin >> x;
    int diff = 10 - n;
    int sum = 0;
    for (int i = 2; i <= diff; i++) {
      sum += (6 * (i - 1));
    }
    cout << sum << '\n';
  }
  return 0;
}
