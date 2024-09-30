/*
 * @lc app=leetcode id=2855 lang=cpp
 *
 * [2855] Minimum Right Shifts to Sort the Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int a=0;int c=0;
        for(int i=1;i<nums.size() && a<2;i++){
           if(nums[i]<nums[i-1]){
            a++;
           }
           if(a){
              c++;
           }
        }
        return a==0 ? 0 : a==2 ? -1 : a==1 && nums[nums.size()-1]<nums[0] ? c : -1;
    }
};
// @lc code=end

