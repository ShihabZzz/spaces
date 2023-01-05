/**
 *    Author:   Shihab
 *    Created:  2022-12-29 00:50:52
 *
 *    Problem:  https://atcoder.jp/contests/abc283/tasks/abc283_d
 **/
// GCC Optimization Pragmas

/*#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  int ln = s.length();
  stack<pair<int, char>> saveOne, saveTwo;
  set<char> siuu;
  for (int i = 0; i < ln; i++) {
    if (s[i] == '(') {
      saveOne.push({i, s[i]});
    } else if (s[i] == ')') {
      auto it = saveOne.top();
      saveOne.pop();
      while (!saveTwo.empty() && saveTwo.top().first > it.first) {
        siuu.erase(saveTwo.top().second);
        saveTwo.pop();
      }
    } else {
      if (siuu.find(s[i]) != siuu.end()) {
        cout << "No\n";
        return 0;
      }
      siuu.insert(s[i]);
      saveTwo.push({i, s[i]});
    }
  }
  cout << "Yes\n";
  return 0;
}
