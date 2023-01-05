/**
 *    Author:   Shihab
 *    Created:  2022-11-04 20:26:36
 *
 *    Problem:  https://codeforces.com/contest/1747/problem/A
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
    long long sum = 0;
    vector<int> v(n);
    for (auto &x : v) {
      cin >> x;
      sum += x;
    }
    cout << abs(sum) << "\n";
  }
  return 0;
}