/*
 * @lc app=leetcode id=3131 lang=cpp
 *
 * [3131] Find the Integer Added to Array I
 */

// @lc code=start
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),end(nums1));
       sort(begin(nums2),end(nums2));
       return nums2[0]-nums1[0];   
    }
};
// @lc code=end

