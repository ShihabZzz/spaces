/**
 *    Author:   Shihab
 *    Created:  2022-08-30 21:42:31
 *
 *    Problem:  https://codeforces.com/contest/1722/problem/C
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
    map<string, int> m;
    vector<string> v[3];
    for (int k = 0; k < 3; k++)
      for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
        v[k].push_back(s);
      }
    vector<int> score(3);
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < v[i].size(); j++) {
        if (m[v[i][j]] == 1)
          score[i] = score[i] + 3;
        else if (m[v[i][j]] == 2)
          score[i] = score[i] + 1;
      }
    }
    for (auto s : score)
      cout << s << " ";
    cout << '\n';
  }
  return 0;
}
