/*
 * @lc app=leetcode id=2644 lang=cpp
 *
 * [2644] Find the Maximum Divisibility Score
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {int mx=0,ans=divisors[0];
        for(int i=0;i<divisors.size();i++){
            if(divisors[i]==1){return 1;}
            int c=0;
            for(int j=0;j<nums.size();j++){
                 if(nums[j]%divisors[i]==0){
                    c++;
                 }
            }
            if(c>=mx){
                 ans= mx==c ? min(ans,divisors[i]) : divisors[i];  
                 mx=c;
            }
        }
        return ans;
    }
};
// @lc code=end

