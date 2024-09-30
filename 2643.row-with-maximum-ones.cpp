/*
 * @lc app=leetcode id=2643 lang=cpp
 *
 * [2643] Row With Maximum Ones
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int mx=0,index=0;
          for(int i=0;i<mat.size();i++){
            int a=count(mat[i].begin(),mat[i].end(),1);
            if(a>mx){
                index=i;mx=a;
            }
          }
        return {index,mx};
    }
};
// @lc code=end

