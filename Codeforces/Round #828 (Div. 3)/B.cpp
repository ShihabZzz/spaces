/**
 *    Author:   Shihab
 *    Created:  2022-10-16 22:01:20
 *
 *    Problem:  https://codeforces.com/contest/1744/problem/B
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
    long long n, q, ToT = 0, ev = 0, od = 0;
    cin >> n >> q;

    vector<long long> v;
    for (long long i = 0; i < n; i++) {
      long long x;
      cin >> x;
      v.push_back(x);
      ToT += x;
      if ((x & 1))
        od++;
      else
        ev++;
    }

    while (q--) {
      long long a, b;
      cin >> a >> b;
      if (a) {
        ToT += (od * b);
        if ((b & 1)) {
          ev += od;
          od = 0;
        }
      } else {
        ToT += (ev * b);
        if ((b & 1)) {
          od += ev;
          ev = 0;
        }
      }
      cout << ToT << '\n';
    }
  }
  return 0;
}
