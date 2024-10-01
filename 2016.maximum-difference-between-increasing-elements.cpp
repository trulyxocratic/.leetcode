/*
 * @lc app=leetcode id=2016 lang=cpp
 *
 * [2016] Maximum Difference Between Increasing Elements
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {int mx=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                mx=max(mx,nums[j]-nums[i]);
            }
        }
        return mx==0 ? -1 : mx;
    }
};
// @lc code=end

