/**
 *    Author:   Shihab
 *    Created:  2022-08-04 23:28:53
 *
 *    Problem:  https://codeforces.com/contest/1714/problem/A
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
    int h, m;
    cin >> h >> m;
    int minMi = 24 * 60;
    int bedTi = (h * 60) + m;
    while (n--) {
      int hi, mi;
      cin >> hi >> mi;
      int diff = (hi * 60) + mi - bedTi;
      if (diff < 0)
        diff += 24 * 60;
      minMi = min(minMi, diff);
    }
    cout << minMi / 60 << " " << minMi % 60 << "\n";
  }
  return 0;
}
