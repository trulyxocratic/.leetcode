/*
 * @lc app=leetcode id=3065 lang=cpp
 *
 * [3065] Minimum Operations to Exceed Threshold Value I
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {int c=0;
        for(int i=0;i<nums.size();i++){
              if(nums[i]<k){
                c++;
              }
        }
        return c;
    }
};
// @lc code=end

