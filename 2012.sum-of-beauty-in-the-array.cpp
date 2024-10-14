/*
 * @lc app=leetcode id=2012 lang=cpp
 *
 * [2012] Sum of Beauty in the Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];int ans=0;vector<int> mx1;int mx2=INT_MAX;
        for(int i=n-1;i>1;i--){
            mx2=min(mx2,nums[i]);
            mx1.push_back(mx2);
        }
        for(int i=1;i<n-1;i++){
            
            if(mx<nums[i] && nums[i]<mx1[n-2-i]){
               ans+=2;
            }
            else if(nums[i]<nums[i+1] && nums[i]>nums[i-1]){
                ans++;
            }
            mx=max(mx,nums[i]);
        }
        return ans;
    }
};
// @lc code=end

