/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
#include <vector>


using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int j=0,n=sandwiches.size(),c=0;vector<int> a;
        for(int i=0;i<n;i++){
            int k=0;
            for(;k<n;j=(j+1)%n){
                   if(count(a.begin(),a.end(),j)==1){k++;continue;}
                   if(students[j]==sandwiches[i]){
                    c++;a.push_back(j);j=(j+1)%n;break;
                   }
                   k++;
            }
            if(k==n){break;}
        }
        return n-c;
    }
};
// @lc code=end

