/*
 * @lc app=leetcode id=2155 lang=cpp
 *
 * [2155] All Divisions With the Highest Score of a Binary Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int a=count(nums.begin(),nums.end(),1);int b=0;int n=nums.size();int c=a;vector<int> ans;
        int mx=a+b;
        for(int i=1;i<=n;i++){
            if(nums[i-1]==1) {a--;} 
            else {b++;}
            mx=max(mx,a+b);
        }
       b=0;
       if(mx==c+b){
            ans.push_back(0);
        }
       for(int i=1;i<=n;i++){
        if(nums[i-1]==1) {c--;} 
        else {b++;}
        if(mx==c+b){
            ans.push_back(i);
        }
       }
        return ans;
    }
};
// @lc code=end

