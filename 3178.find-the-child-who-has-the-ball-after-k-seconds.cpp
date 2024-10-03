/*
 * @lc app=leetcode id=3178 lang=cpp
 *
 * [3178] Find the Child Who Has the Ball After K Seconds
 */

// @lc code=start
class Solution {
public:
    int numberOfChild(int n, int k) {
        return (int)(k/(n-1))%2==0? k%(n-1)  : n-1-(k%(n-1));
    }
};
// @lc code=end

