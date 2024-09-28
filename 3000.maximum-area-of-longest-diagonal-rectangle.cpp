/*
 * @lc app=leetcode id=3000 lang=cpp
 *
 * [3000] Maximum Area of Longest Diagonal Rectangle
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {int mx=0,ans=0;
        for(int i=0;i<dimensions.size();i++){
            int a=pow(dimensions[i][0],2) +pow(dimensions[i][1],2);
            
            if(a>=mx){   
                int b=dimensions[i][0]*dimensions[i][1];
                ans = mx==a ? max(ans,b) : b;
                mx=a;
            }
        }
        return ans;
    }
};
// @lc code=end

