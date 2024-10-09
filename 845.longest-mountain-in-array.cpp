/*
 * @lc app=leetcode id=845 lang=cpp
 *
 * [845] Longest Mountain in Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();bool b1=1,b2=1;int c=1;int mx=0;
        for(int i=0;i<n-1;i++){
           if(arr[i]<arr[i+1] && (b1 || b2)){
               c++;b1=0;
           }
           else if(arr[i]>arr[i+1] && !b1){
               c++;b2=0;
           }
           else{
            if(!b2)
            {mx=max(mx,c);}b1=1;b2=1;c=1;
            if(arr[i]<arr[i+1]){i--;}
           }
        }
        if(!b2){mx=max(mx,c);}
        return mx;
    }
};
// @lc code=end

