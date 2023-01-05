/**
 *    Author:   Shihab
 *    Created:  2022-12-27 20:37:59
 *
 *    Problem:  https://codeforces.com/contest/1731/problem/0
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
    vector<long long> v(n);
    for (auto &x : v) {
      cin >> x;
    }
    sort(v.begin(), v.end());
    for (auto i = n - 1; i > 0; i--) {
      long long ax = v[0] * v[i];
      v[0] = ax;
      v[i] = 1;
    }
    long long sum = 0;
    cout << accumulate(v.begin(), v.end(), sum) * 2022 << "\n";
  }
  return 0;
}