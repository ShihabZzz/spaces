/**
 *    Author:   Shihab
 *    Created:  2022-10-08 23:10:16
 *
 *    Problem:  https://leetcode.com/problems/next-permutation/
 **/

// 1. Find the largest index k such that nums[k] < nums[k + 1]. If no such index, just reverse.
// 2. Find the largest index l > k such that nums[k] < nums[l]
// 3. Swap nums[k] and nums[l]
// 4. Reverse the sub-array nums[k + 1:]

class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    auto i = is_sorted_until(nums.rbegin(), nums.rend());
    if (i != nums.rend()) {
      swap(*i, *upper_bound(nums.rbegin(), i, *i));
    }
    reverse(nums.rbegin(), i);
  }
};

// Alternative
class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    next_permutation(nums.begin(), nums.end());
  }
};

// Alternative
class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
      i--;

    if (i >= 0) {
      int j = nums.size() - 1;
      while (nums[i] >= nums[j])
        j--;
      swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + (i + 1), nums.end());
  }
};
