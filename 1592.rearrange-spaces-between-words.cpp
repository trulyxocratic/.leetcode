/*
 * @lc app=leetcode id=1592 lang=cpp
 *
 * [1592] Rearrange Spaces Between Words
 */

// @lc code=start
#include <string>
#include <sstream> 
using namespace std;
class Solution {
public:
    string reorderSpaces(string text) {
        stringstream ss(text);string word,ans;int c=0;
        while(ss>>word){
              c++;
        }
        int d=count(begin(text),end(text),' ');
        int e=d;
        stringstream ss1(text);
        while(ss1>>word){
           ans+=word;
           if(c!=1 && e>d%(c-1)){
                ans.insert(ans.end(),(int)d/(c-1),' ');}
           else{
               if(c==1){
                    ans.insert(ans.end(),d,' ');
                    continue;
               }
               ans.insert(ans.end(),d%(c-1),' ');}
        e-=(int)d/(c-1);      
        }
        return ans;
    }
};
// @lc code=end

