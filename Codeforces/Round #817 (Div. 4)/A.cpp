/**
 *    Author:   Shihab
 *    Created:  2022-08-30 20:49:16
 *
 *    Problem:  https://codeforces.com/contest/1722/problem/A
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
    string nm = "Timur";
    sort(nm.begin(), nm.end());
    sort(s.begin(), s.end());
    (s == nm) ? cout << "YES" << '\n' : cout << "NO" << '\n';
  }
  return 0;
}
