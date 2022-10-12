/**
 *    Author:   Shihab
 *    Created:  2022-10-12 17:34:22
 *
 *    Problem:  https://codeforces.com/contest/1741/problem/C
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
    partial_sum(v.begin(), v.end(), v.begin());
    int ans = n;
    for (int i = 0; i < n; i++) {
      int curr_idx = i + 1;
      int seg_diff = curr_idx;
      int pre_idx = 2;
      while (binary_search(v.begin() + i, v.end(), (v[i] * pre_idx))) {
        int idx =
            lower_bound(v.begin() + i, v.end(), (v[i] * pre_idx)) - v.begin();
        int diff = abs(curr_idx - (idx + 1));
        seg_diff = max(seg_diff, diff);
        pre_idx++;
        curr_idx = idx + 1;
      }
      if (curr_idx == n)
        ans = min(ans, seg_diff);
    }
    cout << ans << '\n';
  }
  return 0;
}
