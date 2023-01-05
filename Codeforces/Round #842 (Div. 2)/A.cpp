/**
 *    Author:   Shihab
 *    Created:  2023-01-05 21:00:16
 *
 *    Problem:  https://codeforces.com/contest/1768/problem/0
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
    int x;
    cin >> x;
    cout << x - 1 << '\n';
  }
  return 0;
}