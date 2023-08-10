/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
// #include <bits/stdc++.h>
class Solution
{
public:
    bool isPalindrome(long long x)
    {
        long long tmp = x;

        if (x < 0)
            return false;
        long long y = 0;
        while (x > 0)
        {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return tmp == y;
    }
};
// @lc code=end
