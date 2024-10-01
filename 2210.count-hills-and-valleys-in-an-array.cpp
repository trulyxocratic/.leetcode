/*
 * @lc app=leetcode id=2210 lang=cpp
 *
 * [2210] Count Hills and Valleys in an Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int countHillValley(vector<int>& nums) {bool a=0,b=0;int c=0,i=1,ans=0;
        while(i<nums.size()){
            if(nums[i]>nums[i-1] && !a && !b){
                a=1;c=nums[i];
            }
            else if(nums[i]<nums[i-1] && !b && !a){
             b=1;c=nums[i];
            }
            else if(c>nums[i] && a ){
                ans++;a=0;continue;
            }
            else if(c<nums[i] && b){
                ans++;b=0;continue;
            }
            else if(nums[i]==nums[i-1]){
                   i++;continue;
            }
            else if(!b || !a){
                b=0;a=0;continue;
            }
            else{
                a=0;b=0;
            }
            i++;
            
        }
        return ans;
    }
};
// @lc code=end

