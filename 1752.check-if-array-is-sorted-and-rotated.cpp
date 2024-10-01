/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        
        int a=0;
        for(int i=1;i<nums.size() && a<2;i++){
           if(nums[i]<nums[i-1]){
            a++;
           }
        }
        return a==0 ? 1 : a==2 ? 0 : a==1 && nums[nums.size()-1]<=nums[0] ? 1 : 0;   
    }
};
// @lc code=end

