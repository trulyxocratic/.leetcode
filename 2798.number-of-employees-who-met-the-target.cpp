/*
 * @lc app=leetcode id=2798 lang=cpp
 *
 * [2798] Number of Employees Who Met the Target
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int c=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                c++;
            }
        }
        return c;
    }
};
// @lc code=end

