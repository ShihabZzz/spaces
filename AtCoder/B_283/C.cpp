/**
 *    Author:   Shihab
 *    Created:  2022-12-24 18:43:08
 *
 *    Problem:  https://atcoder.jp/contests/abc283/tasks/abc283_c
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int le = s.length();
  int cnt = 0;
  bool fl = false;
  for (int i = 0; i < le; i++) {
    if (fl) {
      fl = false;
      continue;
    }
    if (i != le - 1)
      if (s[i] == '0' && s[i + 1] == '0') {
        fl = true;
        cnt++;
        continue;
      }
    cnt++;
  }
  cout << cnt << '\n';
  return 0;
}