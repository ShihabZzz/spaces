/**
 *    Author:   Shihab
 *    Created:  2022-10-28 00:34:10
 *
 *    Problem:  https://codeforces.com/contest/1742/problem/C
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
    char ch[8][8];
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> ch[i][j];
      }
    }
    bool ans = true;
    for (int i = 0; i < 8; i++) {
      ans = true;
      for (int j = 0; j < 8; j++)
        if (ch[i][j] == 'B') {
          ans = false;
          break;
        }
      if (ans) {
        cout << "R\n";
        break;
      }
    }
    if (!ans)
      cout << "B\n";
  }
  return 0;
}
