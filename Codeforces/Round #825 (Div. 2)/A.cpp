/**
 *    Author:   Shihab
 *    Created:  2022-10-10 20:32:48
 *
 *    Problem:  https://codeforces.com/contest/1736/problem/A
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
    vector<int> v1, v2;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v2.push_back(x);
    }

    int m1 = count(v1.begin(), v1.end(), 1);
    int m2 = count(v2.begin(), v2.end(), 1);
    int diff = abs(m1 - m2);

    if (v1 == v2)
      cout << 0 << '\n';
    else if ((v1 != v2) && (m1 == m2))
      cout << 1 << '\n';
    else {
      for (int i = 0; i < n; i++) {
        if (diff > 0) {
          if (m1 < m2) {
            if (!v1[i])
              if (v1[i] != v2[i]) {
                v1[i] = 1 - v1[i];
                diff--;
              }
          } else {
            if (v1[i])
              if (v1[i] != v2[i]) {
                v1[i] = 1 - v1[i];
                diff--;
              }
          }
          // diff--;
        }
      }
      (v1 == v2) ? cout << abs(m1 - m2) << '\n'
                 : cout << abs(m1 - m2) + 1 << '\n';
    }
  }
  return 0;
}