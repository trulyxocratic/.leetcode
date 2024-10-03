/*
 * @lc app=leetcode id=1909 lang=cpp
 *
 * [1909] Remove One Element to Make the Array Strictly Increasing
 */

// @lc code=start
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int ans=0;stack <int> a,b;int n=nums.size();a.push(nums[0]);
        for(int i=1;i<n && ans<2;i++){
             if(nums[i]>a.top()){
                a.push(nums[i]);
             }
             else{
                ans++;
             }
             }
         if(ans<2){return 1;}
         ans=0;b.push(nums[n-1]);
         for(int i=n-2;i>=0;i--){
            if(nums[i]<b.top()){
                b.push(nums[i]);
            }
            else{
                ans++;
            }
         }
         return ans<2 ? 1 : 0;
       
    }
};
// @lc code=end

