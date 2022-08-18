/**
 *    Author:   Shihab
 *    Created:  2022-08-16 20:24:10
 *
 *    Problem:  https://codeforces.com/contest/1719/problem/A
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
    int n, m;
    cin >> n >> m;
    ((n + m) & 1) ? cout << "Burenka\n" : cout << "Tonya\n";
  }
  return 0;
}
