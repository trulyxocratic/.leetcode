/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
#include <vector>


using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int d=0;vector<vector<int>> ans;vector<int> a(c);
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                a[d]=mat[i][j];d++;
                if(d==c){
                      ans.push_back(a);d=0;
                }
            }
        }
        return ans.size()==r ? ans : mat;
    }
};
// @lc code=end

