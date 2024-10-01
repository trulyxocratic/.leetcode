/*
 * @lc app=leetcode id=1800 lang=cpp
 *
 * [1800] Maximum Ascending Subarray Sum
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=nums[0],mx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                ans+=nums[i];
            }
            else{
                mx=max(mx,ans);
                ans=nums[i];
            }
        }
        mx=max(mx,ans);
        
        return mx;
    }
};
// @lc code=end

