/*
 * @lc app=leetcode id=2899 lang=cpp
 *
 * [2899] Last Visited Integers
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        int n=nums.size();vector<int> ans,seen;int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]==-1){
                k++;
                int n1=seen.size();
                if(k<=n1){
                    ans.push_back(seen[n1-k]);
                }
                else{
                    ans.push_back(-1);
                }
            }
            else{
                k=0;
                seen.push_back(nums[i]);
            }
        }
        return ans;
    }
};
// @lc code=end

