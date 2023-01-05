/**
 *    Author:   Shihab
 *    Created:  2022-10-20 20:35:55
 *
 *    Problem:  https://codeforces.com/contest/1749/problem/B
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
    int hl[n];
    int sp[n];
    for (int i = 0; i < n; i++) {
      cin >> hl[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> sp[i];
    }
    vector<pair<long, long>> v;
    for (int i = 0; i < n; i++) {
      v.push_back({sp[i], hl[i]});
    }
    sort(v.begin(), v.end());
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
      ans += v[i].second;
      v[i + 1].second += v[i].first;
    }
    ans += v[n - 1].second;
    cout << ans << '\n';
  }
  return 0;
}