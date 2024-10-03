/*
 * @lc app=leetcode id=3038 lang=cpp
 *
 * [3038] Maximum Number of Operations With the Same Score I
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size(),ans=1,score=nums[0]+nums[1];
        for(int i=2;i<n-1;i+=2){
            if(nums[i]+nums[i+1]==score){
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

