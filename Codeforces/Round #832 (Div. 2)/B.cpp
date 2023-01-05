/**
 *    Author:   Shihab
 *    Created:  2022-11-04 20:45:54
 *
 *    Problem:  https://codeforces.com/contest/1747/problem/B
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
    int d = (n + 1) / 2;
    int j = 1;
    cout << d << '\n';
    for (int i = 1; i <= d; i++) {
      cout << j << " " << 3 * n << '\n';
      j += 3;
      n--;
    }
  }
  return 0;
}