/*
 * @lc app=leetcode id=1576 lang=cpp
 *
 * [1576] Replace All ?'s to Avoid Consecutive Repeating Characters
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    char near(char c){
    c=='a' ? c='b':c='a';       
    return c;    
     }
    string modifyString(string s) {
        for(int i=0;i<s.size();i++){
         if(s[i]=='?'){
            if(i==0){
                s[i]=near(s[i+1]);
            }
            else  if(i==s.size()){
                s[i]=near(s[i-1]);
            }
            else{
                s[i]=near(s[i-1]);
                if(s[i]==s[i+1]){
                    s[i]++;
                }
                if(s[i]==s[i-1]){
                    s[i]++;
                }
            }
         }
        }
         return s;
   }
};     
// @lc code=end