/**
 *    Author:   Shihab
 *    Created:  2022-08-12 14:39:46
 *
 *    Problem:  https://codeforces.com/contest/1323/problem/A
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
    bool cnt = false;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
      cin >> i;
    for (int x = 0; x < n; x++) {
      if (!(v[x] & 1)) {
        cout << "1" << '\n' << x + 1 << '\n';
        cnt = true;
        break;
      }
    }
    if (!cnt)
      ((!(n & 1)) || n > 1) ? cout << "2\n" << "1 2\n" : cout << "-1\n";
  }
  return 0;
}
