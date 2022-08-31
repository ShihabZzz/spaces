/**
 *    Author:   Shihab
 *    Created:  2022-08-18 20:03:08
 *
 *    Problem:  https://codeforces.com/contest/1720/problem/B
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
    sort(v.begin(), v.end());
    cout << (v[n - 1] - v[0]) + (v[n - 2] - v[1]) << '\n';
  }
  return 0;
}
