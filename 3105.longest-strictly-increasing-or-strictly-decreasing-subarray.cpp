/*
 * @lc app=leetcode id=3105 lang=cpp
 *
 * [3105] Longest Strictly Increasing or Strictly Decreasing Subarray
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {bool b1=1,b2=1;int c=1,mx=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i-1]>nums[i] && b1==1){
                       c++;b2=0;i++;
            }
            else if(nums[i-1]<nums[i] && b2==1){
                c++;b1=0;i++;
            }
            else if(nums[i-1]==nums[i] && b2==1 &&b1){
                i++;
            }
            else{
                mx=max(mx,c);c=1;b1=1;b2=1;
            }
        }
        mx=max(mx,c);
        
        return mx;
    }
};
// @lc code=end

