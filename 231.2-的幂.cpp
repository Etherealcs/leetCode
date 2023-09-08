/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
        {
            return false;
        }
        while (!(n % 2))
        {
            n /= 2;
        }
        return n == 1;
    }
};
// @lc code=end
