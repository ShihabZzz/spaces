/**
 *    Author:   Shihab
 *    Created:  2022-10-11 21:21:54
 *
 *    Problem:  https://codeforces.com/contest/1741/problem/B
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
    vector<int> v;
    for (int i = 1; i <= n; i++) {
      v.push_back(i);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      if (v[i] == i + 1) {
        reverse(v.begin() + i, v.end());
      }
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
      int diffA = 0, diffB = 0;
      if (i == 0) {
        diffA = abs(v[i] - v[i + 1]);
      } else if (i == n - 1)
        diffA = abs(v[i] - v[i - 1]);
      else {
        diffA = abs(v[i] - v[i - 1]);
        diffB = abs(v[i] - v[i + 1]);
      }
      if ((v[i] == i + 1) || (diffA != 1 && diffB != 1)) {
        cout << -1 << '\n';
        flag = false;
        break;
      }
    }

    if (flag) {
      for (auto x : v)
        cout << x << " ";
      cout << '\n';
    }
  }
  return 0;
}
