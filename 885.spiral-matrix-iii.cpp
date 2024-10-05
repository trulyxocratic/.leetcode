/*
 * @lc app=leetcode id=885 lang=cpp
 *
 * [885] Spiral Matrix III
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rs, int cs) {
        vector<vector<int>> ans;ans.push_back({rs,cs});int c=1,k=1;
        while(c<rows*cols){
            for(int i=1;i<=k && c<rows*cols;i++){
                k%2 ? cs++ : cs--;
                if(rs>=0 && rs<rows && cs<cols && cs>=0){
                    ans.push_back({rs,cs});c++;
                }
            }
            for(int i=1;i<=k && c<rows*cols;i++){
                k%2 ? rs++ : rs--;
                if(rs>=0 && rs<rows && cs<cols && cs>=0){
                    ans.push_back({rs,cs});c++;
                }
            }
            k++;
        }
        return ans;
    }
};
// @lc code=end

