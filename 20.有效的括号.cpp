/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        int num = 0;
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else if (!st.empty() &&
                     ((c == ')' && st.top() == '(') ||
                      (c == '}' && st.top() == '{') ||
                      (c == ']' && st.top() == '[')))
            {
                st.pop();
            }
            else
                return false;
        }
        return st.empty();
    }

    // bool isValid(string s)
    // {
    //     return true;
    // }
};
// @lc code=end
