/*
 * @lc app=leetcode id=2176 lang=cpp
 *
 * [2176] Count Equal and Divisible Pairs in an Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {int c=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && (i*j)%k==0){
                    c++;
                }
            }
        }
        return c;
    }
};
// @lc code=end

