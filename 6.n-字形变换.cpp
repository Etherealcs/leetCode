/*
 * @Author: yao 3043885855@qq.com
 * @Date: 2023-09-28 13:29:54
 * @LastEditors: yao 3043885855@qq.com
 * @LastEditTime: 2023-09-28 15:51:49
 * @FilePath: \undefinedg:\VScode\LeetCode\6.n-字形变换.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] N 字形变换
 */

// @lc code=start
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }
        int length = s.length();
        int firstIdx = 0, delta = 2 * (numRows - 1);
        string res = "";
        for (int i = 0; i < s.length(); i += delta)
        {
            res.append(s.substr(i, 1));
        }
        int idx = 1;
        while (idx < numRows - 1)
        {
            for (int i = 0; i < s.length() + delta; i += delta)
            {
                if (i - idx < 0 || i - idx >= length)
                {
                }
                else
                {
                    res.append(s.substr(i - idx, 1));
                }
                if (i + idx < 0 || i + idx >= length)
                {
                }
                else
                {
                    res.append(s.substr(i + idx, 1));
                }
            }
            idx++;
        }
        if (numRows - 1 == idx)
        {
            for (int i = numRows - 1; i < length; i += delta)
            {
                res.append(s.substr(i, 1));
            }
        }
        return res;
    }
};
// @lc code=end
