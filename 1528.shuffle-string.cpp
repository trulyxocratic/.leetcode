/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s1=s;
    for(int i=0;i<s.size();i++){
        s1[indices[i]]=s[i];
    }
    return s1;
}
};
// @lc code=end

