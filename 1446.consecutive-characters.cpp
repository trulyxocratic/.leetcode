/*
 * @lc app=leetcode id=1446 lang=cpp
 *
 * [1446] Consecutive Characters
 */

// @lc code=start
#include <string>


using namespace std;
class Solution {
public:
    int maxPower(string s) {
        int c=1,mx=1;
        for(int i=1;i<s.size();i++){
            while(i<s.size() && s[i-1]==s[i]){
                    c++;i++;
            }
             mx=max(mx,c);c=1;
        }
        return mx;
    }
};
// @lc code=end

