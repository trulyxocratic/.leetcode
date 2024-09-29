/*
 * @lc app=leetcode id=2908 lang=cpp
 *
 * [2908] Minimum Sum of Mountain Triplets I
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();int ans=150;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[i]>=nums[j]){continue;}
                for(int k=j+1;k<n;k++){
                  if(nums[k]<nums[j]){
                          ans=min(ans,nums[k]+nums[j]+nums[i]);
                  }
                }
            }
        }
        return ans==150? -1 : ans;
    }
};
// @lc code=end

