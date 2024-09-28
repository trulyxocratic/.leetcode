/*
 * @lc app=leetcode id=3033 lang=cpp
 *
 * [3033] Modify the Matrix
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int> a(matrix.size()-1);
        for(int i=0;i<matrix[0].size();i++){
            int k=-1,mx=0;
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][i]==-1){
                    k++;a[k]=j;
                }
                mx=max(mx,matrix[j][i]);
            }
            for(;k>=0;k--){
                 matrix[a[k]][i]=mx;
            }
        }
        return matrix;
    }
};
// @lc code=end

