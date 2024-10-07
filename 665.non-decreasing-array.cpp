/*
 * @lc app=leetcode id=665 lang=cpp
 *
 * [665] Non-decreasing Array
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();int a=0;bool b1=1,b2=1;
        for(int i=0;i<n-1&&(b1||b2);i++){
            if(nums[i]>nums[i+1]){
                a++; 
                if(a==2||(i>0 && nums[i-1]>nums[i+1])){
                    b1=0;
                }
                if(a==2||(i>0 && nums[i-1]>nums[i+1])){
                    b2=0;
                }
            }
        }
       if(b1||b2) {return 1;}
       b1=1;b2=1;a=0;
       for(int i=n-1;i>0&&(b1||b2);i--){
             if(nums[i-1]>nums[i]){
                a++; 
                if(a==2||(i<n-1 && nums[i-1]>nums[i+1])){
                    b1=0;
                }
                if(a==2||(i<n-1 && nums[i-1]>nums[i+1])){
                    b2=0;
                }
            }
       }
        return b1||b2;
    }
};
// @lc code=end

