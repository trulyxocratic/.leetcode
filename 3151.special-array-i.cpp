/*
 * @lc app=leetcode id=3151 lang=cpp
 *
 * [3151] Special Array I
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]%2 && nums[i+1]%2) ||(!(nums[i]%2) && !(nums[i+1]%2)) ){return 0;}
        }
        return 1;
    }
};
// @lc code=end

