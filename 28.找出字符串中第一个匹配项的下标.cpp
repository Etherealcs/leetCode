/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */
#include <string>
using namespace std;
// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // 第一种方法
        // return haystack.find(needle);

        // 第二种方法,使用双指针
        int i = 0, j = 0;
        while (i < haystack.size())
        {
            if (haystack[i] == needle[j])
            {
                i++;
                j++;
            }
            else
            {
                i = i - j + 1;
                j = 0;
            }
            if (j == needle.size())
                return i - j;
        }
        return -1;
    }
};
// @lc code=end
