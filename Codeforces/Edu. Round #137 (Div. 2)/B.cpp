/**
 *    Author:   Shihab
 *    Created:  2022-10-17 21:26:05
 *
 *    Problem:  https://codeforces.com/contest/1743/problem/B
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
    cout << 1 << " ";
    for (int i = n; i >= 2; i--) {
      cout << i << " ";
    }
    cout << '\n';
  }
  return 0;
}
