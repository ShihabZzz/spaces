/**
 *    Author:   Shihab
 *    Created:  2022-10-13 20:35:47
 *
 *    Problem:  https://codeforces.com/contest/1742/problem/A
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
    int a, b, c;
    cin >> a >> b >> c;
    (((a + b) == c) || ((b + c) == a) || ((c + a) == b)) ? cout << "YES\n"
                                                         : cout << "NO\n";
  }
  return 0;
}
