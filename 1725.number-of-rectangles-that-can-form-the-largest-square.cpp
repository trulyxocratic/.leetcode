/*
 * @lc app=leetcode id=1725 lang=cpp
 *
 * [1725] Number Of Rectangles That Can Form The Largest Square
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        int mx=0;int ans=0;
        for(int i=0;i<r.size();i++){
            if(min(r[i][0],r[i][1])>mx){
                ans=0;mx=min(r[i][0],r[i][1]);
            }
            if((mx==r[i][0] && mx<=r[i][1])|| (mx==r[i][1] && mx<=r[i][0])){
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

