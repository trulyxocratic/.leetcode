/*
 * @lc app=leetcode id=3285 lang=cpp
 *
 * [3285] Find Indices of Stable Mountains
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;
        for (int i = 1; i < height.size(); i++)
        {
            if(height[i-1]>threshold){ans.push_back(i);}
        }
        return ans;
        
    }
};
// @lc code=end

