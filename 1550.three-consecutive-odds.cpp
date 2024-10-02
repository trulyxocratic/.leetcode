/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<(n-2);i++){
            if(arr[i]%2 && arr[i+1]%2 && arr[i+2]%2){
                return 1;
                }
        }
        return 0;
    }
};
// @lc code=end
