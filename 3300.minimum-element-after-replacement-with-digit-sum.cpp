/*
 * @lc app=leetcode id=3300 lang=cpp
 *
 * [3300] Minimum Element After Replacement With Digit Sum
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();int mn=36;
        for(int i=0;i<n;i++){
            int sum=0;
                while(nums[i]>0){
                    sum+=nums[i]%10;
                    nums[i]/=10;
                }
            mn=min(mn,sum);
        }
        return mn;
    }
};
// @lc code=end

