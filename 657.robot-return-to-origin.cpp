/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
#include <string>

using namespace std;
class Solution {
public:
    bool judgeCircle(string m) {
        return count(m.begin(),m.end(),'L')==count(m.begin(),m.end(),'R') && count(m.begin(),m.end(),'U')==count(m.begin(),m.end(),'D');
    }
};
// @lc code=end

