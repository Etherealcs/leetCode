/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

#include <iostream>
#include <string>
using namespace std;
// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0; // 是否进位
        string res;
        while (i >= 0 || j >= 0) // 都算完才结束
        {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0'; // char转成int赋值
            if (j >= 0)              // 小于的时候就是越界了
                sum += b[j--] - '0';
            res = (char)(sum % 2 + '0') + res;
            carry = sum / 2; // sum为2的话进一
        }
        if (carry) // 进了一位
            res = '1' + res;
        return res;
    }
};
// @lc code=end
