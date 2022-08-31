/**
 *    Author:   Shihab
 *    Created:  2022-08-13 21:15:12
 *
 *    Problem:  https://codeforces.com/contest/1712/problem/B
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
    vector<int> per(n + 1);
    bool cnt = false;
    for (int i = n; i >= 1; i--) {
      if (!cnt) {
        int d = i;
        if ((n & 1) && i == 1)
          per[i] = d;
        else {
          per[i] = d - 1;
          cnt = true;
        }
      } else {
        int d = i;
        per[i] = d + 1;
        cnt = false;
      }
    }

    for (int i = 1; i <= n; i++)
      cout << per[i] << " ";
    cout << "\n";
  }
  return 0;
}
