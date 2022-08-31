/**
 *    Author:   Shihab
 *    Created:  2022-08-30 21:30:38
 *
 *    Problem:  https://codeforces.com/contest/1722/problem/B
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
    int col;
    cin >> col;
    string r1, r2;
    cin >> r1 >> r2;
    for (int i = 0; i < r1.size(); i++) {
      if (r1[i] == 'G')
        r1[i] = 'B';
      if (r2[i] == 'G')
        r2[i] = 'B';
    }
    (r1 == r2) ? cout << "YES" << '\n' : cout << "NO" << '\n';
  }
  return 0;
}
