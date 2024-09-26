/*
 * @lc app=leetcode id=1417 lang=cpp
 *
 * [1417] Reformat The String
 */

// @lc code=start
#include <string>
#include <vector> 
using namespace std;
class Solution {
public:
    string reformat(string s) {
        int c=0;vector<int> a;string s1="";
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                c++;a.push_back(s[i]);
            }
            else{
                c--;s1+=s[i];
            }
        }
        if(abs(c)>1){return "";}bool b;int j=0,k=0;
        c>=0 ? b=1 :b=0;
        for(int i=0;i<s.size();i++){
            if(b){
              s[i]=a[j];j++;b=0;
            }
            else{
                s[i]=s1[k];k++;b=1;
            }
        }
        return s;

    }
};
// @lc code=end

