/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

#include <math.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int mySqrt(long long x)
    {
        // 调用内置函数
        // return sqrt(x);
        // 暴力
        // return (int)pow(x, 0.5);
        // 暴力for循环
        // for (long long i = 0; i <= x + 1; i++)
        // {
        //     if (i * i > x)
        //     {
        //         return i - 1;
        //     }
        // }
        // return 0;
        // 二分法
        if (x == 0 || x == 1)
        {
            return x;
        }
        long long left = 0, right = x;
        while (left < right)
        {
            long long mid = left + (right - left) / 2;
            if (mid * mid > x)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left - 1;
    }
};
// @lc code=end
