/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
#include <vector>
#include <string>
#include <numeric>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& o) {
        vector<int> a;
        for(int i=0;i<o.size();i++){
            if(o[i]=="C"){
                 a.pop_back();
            }
            else if(o[i]=="D"){
                 a.push_back(a[a.size()-1]*2);
            }
            else if(o[i]=="+"){
                 a.push_back(a[a.size()-1]+a[a.size()-2]);
            }
            else{
                a.push_back(stoi(o[i]));
            }
        }
        return accumulate(a.begin(),a.end(),0);
    }
};
// @lc code=end

