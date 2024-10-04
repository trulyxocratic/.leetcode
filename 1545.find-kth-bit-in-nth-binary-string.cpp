/*
 * @lc app=leetcode id=1545 lang=cpp
 *
 * [1545] Find Kth Bit in Nth Binary String
 */

// @lc code=start
#include <string>

using namespace std;
class Solution {
public:
    string invert(string ans){
        int n=ans.size();
        for(int i=0;i<n;i++){
           ans[i]= ans[i]=='1' ? '0':'1';
        }
        return ans;
    }
    string str(int n){
        if(n==1){
            return "0";
        }
        string ans=str(n-1);
        string ans1=invert(ans);
        ans+='1';
        reverse(ans1.begin(),ans1.end());
        return ans  +  ans1;    
    }
    char findKthBit(int n, int k) {
        string ans=str(n);
        return ans[k-1];
    }
};
// @lc code=end

