/**
 *    Author:   Shihab
 *    Created:  2022-10-25 00:35:43
 *
 *    Problem:  https://codeforces.com/contest/1754/problem/A
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
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
      if (cnt < 0)
        cnt = 0;
      if (s[i] == 'Q')
        cnt++;
      else
        cnt--;
    }
    (cnt <= 0) ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}
