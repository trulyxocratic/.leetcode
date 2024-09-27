/*
 * @lc app=leetcode id=3142 lang=cpp
 *
 * [3142] Check if Grid Satisfies Conditions
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
            
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size()-1;j++ ){
              if( grid[i][j]==grid[i][j+1] ){
                return 0;
              }
            }    
        }
         for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size()-1;j++ ){
              if( grid[j][i]!=grid[j+1][i] ){
                return 0;
              }
            }    
        }
        return 1;
    }
};
// @lc code=end

