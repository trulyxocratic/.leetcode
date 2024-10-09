/*
 * @lc app=leetcode id=1375 lang=cpp
 *
 * [1375] Number of Times Binary String Is Prefix-Aligned
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int n=flips.size();int mx=0;int ans=0;
        for(int i=0;i<n;i++){
            mx=max(mx,flips[i]);
            if(mx==i+1){
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

