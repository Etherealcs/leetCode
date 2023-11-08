/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> temp;
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    temp.push_back(1);
                }
                else
                {
                    temp.push_back(res[i - 1][j - 1] + res[i - 1][j]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
// @lc code=end
