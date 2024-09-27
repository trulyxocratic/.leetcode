/*
 * @lc app=leetcode id=3174 lang=cpp
 *
 * [3174] Clear Digits
 */

// @lc code=start
#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    string clearDigits(string s) {
        stack<char> a;string ans="";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                a.push(s[i]);
            }
            else{
                a.pop();
            }

        }
        for(int i=0;!a.empty();i++){
            ans=a.top()+ans;a.pop();
        }
        return ans;
    }
};
// @lc code=end

