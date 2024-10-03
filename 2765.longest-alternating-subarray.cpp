/*
 * @lc app=leetcode id=2765 lang=cpp
 *
 * [2765] Longest Alternating Subarray
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int k=0;
            for(int j=i+1;j<n;j++){
              if(nums[j]-nums[j-1]==pow(-1,k)){
                k++;
              }
              else{
                break;    
              }
            }
            ans= k>0 ? max(ans,k+1) : ans;   
        }
        return ans;

    }
};
// @lc code=end

