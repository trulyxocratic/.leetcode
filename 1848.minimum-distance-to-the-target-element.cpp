/*
 * @lc app=leetcode id=1848 lang=cpp
 *
 * [1848] Minimum Distance to the Target Element
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=1000;
        for(int i=0;i<nums.size();i++){
            int a=abs(i-start);
            if(nums[i]==target && a<ans ){
               ans=a;
            }
        }
        return ans;
    }
};
// @lc code=end

