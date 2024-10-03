/*
 * @lc app=leetcode id=2960 lang=cpp
 *
 * [2960] Count Tested Devices After Test Operations
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int ans=0;int n=b.size();int c=0;
        for(int i=0;i<n;i++){
            if(b[i]-i+c>0){ans++;}
            else{c++;}
        }
        return ans;
    }
};
// @lc code=end

