/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn=INT_MAX;int index=-1;
        for(int i=0;i<points.size()&&mn>0;i++){
              int a=abs(points[i][0]-x)+abs(points[i][1]-y);
            if((points[i][0]==x || points[i][1]==y) && a<mn){
                index=i;mn=a;
            }
        }
        return index;
    }
};
// @lc code=end

