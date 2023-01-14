/**
 *    Author:   Shihab
 *    Created:  2023-01-14 22:23:15
 *
 *    Problem:  https://codeforces.com/problemset/problem/903/A
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
    bool f = false;
    if (!(n % 3) || !(n % 7)) {
      cout << "YES\n";
      continue;
    }
    int i = 1;
    while (i * 7 <= n) {
      int w = n - (i * 7);
      if (!(w % 3)) {
        cout << "YES\n";
        f = true;
        break;
      } else
        i++;
    }
    if (!f)
      cout << "NO\n";
  }
  return 0;
}