/*
 * @lc app=leetcode id=2432 lang=cpp
 *
 * [2432] The Employee That Worked on the Longest Task
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int mx=logs[0][1], id=logs[0][0];
        for(int i=1;i<logs.size();i++){
            int a=logs[i][1]-logs[i-1][1];
             if(a>=mx){
             id=  mx==a ? min(id,logs[i][0]):logs[i][0];
             mx=a;
             }
        }
        return id;
    }
};
// @lc code=end

