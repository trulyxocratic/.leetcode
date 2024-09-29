/*
 * @lc app=leetcode id=2923 lang=cpp
 *
 * [2923] Find Champion I
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();   
        vector<int> a;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){ 
              a.push_back(grid[i][j]?j:i);
            }
        }
        for(int i=0;i<n;i++){
              if (!count(a.begin(),a.end(),i)){
                return i;
              }
        }
        return -1;
    }
};
// @lc code=end

