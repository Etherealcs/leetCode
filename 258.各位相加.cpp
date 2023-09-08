/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
#include <set>
#include <iostream>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        set<int> s;
        int length = s.size();
        while (num >= 10)
        {
            int sum = 0;
            while (num != 0)
            {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
// @lc code=end
