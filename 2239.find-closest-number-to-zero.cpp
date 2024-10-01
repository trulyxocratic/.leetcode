/*
 * @lc app=leetcode id=2239 lang=cpp
 *
 * [2239] Find Closest Number to Zero
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mx=100000;int ans=-100000;
        for(int i=0;i<nums.size();i++){
            int a=abs(nums[i]);
            if(a<=mx){
                ans= a==mx ? max(ans,nums[i]) : nums[i];
                mx=a;
            }
        }
        return ans;
    }
};
// @lc code=end

