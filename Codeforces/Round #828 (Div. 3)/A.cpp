/**
 *    Author:   Shihab
 *    Created:  2022-10-16 20:35:01
 *
 *    Problem:  https://codeforces.com/contest/1744/problem/A
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
    vector<int> v(n);
    for (auto &x : v)
      cin >> x;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (v[i] == v[j]) {
          if (s[i] != s[j]) {
            flag = false;
            break;
          }
        }
      }
      if (!flag)
        break;
    }
    (flag) ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}
