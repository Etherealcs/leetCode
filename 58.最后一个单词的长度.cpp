/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            length++;
            i--;
        }
        return length;
    }
};
// @lc code=end
