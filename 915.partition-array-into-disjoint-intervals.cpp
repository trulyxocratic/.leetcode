/*
 * @lc app=leetcode id=915 lang=cpp
 *
 * [915] Partition Array into Disjoint Intervals
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();int mx=0,index=0;int mx1=nums[0];   bool a=0;
        for(int i=0;i<n-1;i++){
           mx=max(mx,nums[i]);
            if(mx>nums[i+1]&&nums[i+1]<mx1){
                a=1;
                index=i;
                mx1=mx;
            }
        }
        return index==0&&!a  ? index+1 : index+2;
    }
};
// @lc code=end

