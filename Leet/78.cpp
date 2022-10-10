/**
 *    Author:   Shihab
 *    Created:  2022-08-10 02:38:15
 *
 *    Problem:  https://leetcode.com/problems/subsets/
 **/

class Solution {
public:
  vector<vector<int>> sol;

  void subset(vector<int> &nums, int size, vector<int> &subs, int x) {
    if (x == size) {
      sol.push_back(subs);
    } else {
      subs.push_back(nums[x]);
      subset(nums, size, subs, x + 1);
      subs.pop_back();
      subset(nums, size, subs, x + 1);
    }
  }

  vector<vector<int>> subsets(vector<int> &nums) {
    int size = nums.size();
    vector<int> subs;
    subset(nums, size, subs, 0);
    return sol;
  }
};

// Alternative
class Solution {
public:
  vector<vector<int>> subsets(vector<int> &nums) {
    int n = nums.size(), p = 1 << n, i = 0;
    vector<vector<int>> ans(p);
    while (i < p) {
      for (int j = 0; j < n; j++) {
        if (i & (1 << j))
          ans[i].push_back(nums[j]);
      }
      i++;
    }
    return ans;
  }
};
