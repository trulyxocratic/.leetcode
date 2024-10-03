/*
 * @lc app=leetcode id=2582 lang=cpp
 *
 * [2582] Pass the Pillow
 */

// @lc code=start
class Solution {
public:
    int passThePillow(int n, int time) {
        return (int)(time/(n-1))%2==0? time%(n-1) +1 : n-(time%(n-1));
    }
};
// @lc code=end

