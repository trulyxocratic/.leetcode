/*
 * @lc app=leetcode id=2185 lang=cpp
 *
 * [2185] Counting Words With a Given Prefix
 */

// @lc code=start
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {int c=0;
           for(int i=0;i<words.size();i++){
            if(words[i].find(pref)==0){c++;}
           }
           return c;
    }
};
// @lc code=end

