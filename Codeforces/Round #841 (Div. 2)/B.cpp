/**
 *    Author:   Shihab
 *    Created:  2022-12-27 20:57:48
 *
 *    Problem:  https://codeforces.com/contest/1731/problem/B
 **/
// GCC Optimization Pragmas

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  const int M = 1e9 + 7;
  while (tt--) {
    long long n;
    cin >> n;
    __int128 qn = n;
    __int128 ans = (((qn * (qn + 1)) * ((4 * qn) - 1)) / 6) % M;
    ans *= 2022;
    ans %= M;
    cout << (long long)ans << "\n";
  }
  return 0;
}