/**
 *    Author:   Shihab
 *    Created:  2022-10-11 20:35:22
 *
 *    Problem:  https://codeforces.com/contest/1741/problem/A
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
    string a, b;
    string c = "";
    string d = "";
    cin >> a >> b;
    int ca = count(a.begin(), a.end(), 'X');
    int cb = count(b.begin(), b.end(), 'X');
    for (int i = 0; i < a.size(); i++) {
      if (a[i] == 'X')
        continue;
      c = c + a[i];
    }
    for (int i = 0; i < b.size(); i++) {
      if (b[i] == 'X')
        continue;
      d = d + b[i];
    }
    if (c == d) {
      if (c[0] == 'S') {
        if (ca > cb)
          cout << '<' << '\n';
        else if (ca < cb)
          cout << '>' << '\n';
        else
          cout << '=' << '\n';
      } else if (c[0] == 'L' || c[0] == 'M') {
        if (ca > cb)
          cout << '>' << '\n';
        else if (ca < cb)
          cout << '<' << '\n';
        else
          cout << '=' << '\n';
      }
    } else if (c[0] == 'L') {
      cout << '>' << '\n';
    } else if (c[0] == 'S') {
      cout << '<' << '\n';
    } else {
      if (d[0] == 'L')
        cout << '<' << '\n';
      else
        cout << '>' << '\n';
    }
  }
  return 0;
}
