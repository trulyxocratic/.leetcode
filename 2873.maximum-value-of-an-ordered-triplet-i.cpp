/*
 * @lc app=leetcode id=2873 lang=cpp
 *
 * [2873] Maximum Value of an Ordered Triplet I
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long mx=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                   if(nums[i]-nums[j]<=0){continue;}
                   for(int k=j+1;k<n;k++){
                    mx=max(mx,((nums[i]-nums[j])*(long)nums[k]));
                   }
            }
        }
        return mx;
    }
};
// @lc code=end

