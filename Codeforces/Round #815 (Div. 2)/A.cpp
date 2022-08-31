/**
 *    Author:   Shihab
 *    Created:  2022-08-18 19:32:53
 *
 *    Problem:  https://codeforces.com/contest/1720/problem/A
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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a * d) == (b * c))
      cout << 0 << '\n';
    else {
      long long prodOne = a * d;
      long long prodTwo = b * c;
      if ((prodTwo) && (!(prodOne % prodTwo)))
        cout << 1 << '\n';
      else if ((prodOne) && (!(prodTwo % prodOne)))
        cout << 1 << '\n';
      else
        cout << 2 << '\n';
    }
  }
  return 0;
}
