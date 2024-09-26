/*
 * @lc app=leetcode id=1556 lang=cpp
 *
 * [1556] Thousand Separator
 */

// @lc code=start
#include <string>

using namespace std;
class Solution {
public:
    string thousandSeparator(int n) {
        string num=to_string(n);
        for(int i=num.size()-3;i>0;i-=3){
            num.insert(i,1,'.');
        }
        return num;
    }
};
// @lc code=end

