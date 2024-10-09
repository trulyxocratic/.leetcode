/*
 * @lc app=leetcode id=849 lang=cpp
 *
 * [849] Maximize Distance to Closest Person
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();int ans=0;
        for(int i=0;i<n;){
            int index=i;
            i++;
            for(;i<n&&seats[i]==0;i++){
                
            }
            if(index==0 && seats[0]==0){ans=max(ans,i);continue;}
            if(i==n){ans=max(ans,i-1-index);break;}
            else ans=max(ans,(i-index)/2);
            
        }
        return ans;
    }
};
// @lc code=end

