/**
 *    Author:   Shihab
 *    Created:  2023-01-04 23:58:55
 *
 *    Problem:  https://codeforces.com/contest/1779/problem/A
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
    string s;
    cin >> s;
    if (s == string(n, s[0])) {
      cout << -1 << '\n';
      continue;
    }
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == 'R' && s[i + 1] == 'L') {
        cout << 0 << '\n';
        break;
      }
      if (s[i] == 'L' && s[i + 1] == 'R') {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
  return 0;
}