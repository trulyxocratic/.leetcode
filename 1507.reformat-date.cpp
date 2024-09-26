/*
 * @lc app=leetcode id=1507 lang=cpp
 *
 * [1507] Reformat Date
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string reformatDate(string date) {
     vector<string> m={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
     int i=0;
     for(;i<m.size() && m[i]!=date.substr(date.size()-8,3);i++){
        
     }
     return date.substr(date.size()-4,4)+'-' + (i<9 ? '0' : '1') + to_string((i+1)%10) +'-'+(isdigit(date[1]) ? date.substr(0,2) : '0'+date.substr(0,1));
    }
};
// @lc code=end

