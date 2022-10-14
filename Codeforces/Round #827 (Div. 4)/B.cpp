/**
 *    Author:   Shihab
 *    Created:  2022-10-13 20:43:22
 *
 *    Problem:  https://codeforces.com/contest/1742/problem/B
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
    sort(v.begin(), v.end());
    bool flag = false;
    for (int i = 1; i < n; i++) {
      if (v[i] == v[i - 1]) {
        cout << "NO\n";
        flag = true;
        break;
      }
    }
    if (!flag)
      cout << "YES\n";
  }
  return 0;
}
