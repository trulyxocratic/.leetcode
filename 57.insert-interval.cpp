/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();bool a=0;vector<vector<int>> ans;int index1=-1,index2=-1;
        if(n==0){ans.push_back(newInterval);}
        for(int i=0;i<n;i++){
            if(a==0 && newInterval[0]<=intervals[i][0]){
               if(i>0 && newInterval[0]>=intervals[i-1][0] && newInterval[0]<=intervals[i-1][1]){
                ans.pop_back();
                index1=intervals[i-1][0];
               }
               else{
                index1=newInterval[0];
               }
               if(i>0&&index1==intervals[i-1][0] && newInterval[1]<=intervals[i-1][1]){
                ans.push_back(intervals[i-1]);ans.push_back(intervals[i]);a=1;continue;
               }

               int j=i;
               for(;j<n;j++){
                if(newInterval[1]<intervals[j][0]){
                    index2=newInterval[1];break;
                }
                else if(newInterval[1]<=intervals[j][1]){
                    index2=intervals[j][1];break;
                }
               }
               if(index2==-1){
                
                  index2=newInterval[1];
                  ans.push_back({index1,index2});break;
               }
            ans.push_back({index1,index2});
              i= index2==newInterval[1] && newInterval[1]!=intervals[j][1] ? j-1 : j;
               a=1;
            }
            else if(a==0 && i==n-1){
                if(newInterval[0]<=intervals[i][1]){
                    index1=intervals[i][0];
                }
                else{
                    index1=newInterval[0];
                }
                index2= newInterval[1]<=intervals[i][1] ? intervals[i][1] : newInterval[1];
                index1==newInterval[0] ? ans.push_back(intervals[i]),ans.push_back({index1,index2}):ans.push_back({index1,index2});
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
// @lc code=end

