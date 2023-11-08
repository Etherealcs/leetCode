/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res;
        for (int i = 0; i <= rowIndex; i++)
        {
            res.push_back(1);
            for (int j = i - 1; j > 0; j--)
            {
                res[j] = res[j] + res[j - 1];
            }
        }
        return res;
    }
};
// @lc code=end
