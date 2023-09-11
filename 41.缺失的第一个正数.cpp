/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int idx = 1;
        set<int> s(nums.begin(), nums.end());
        for (int item : s)
        {
            if (item <= 0)
            {
                continue;
            }
            else
            {
                if (item == idx)
                {
                    idx++;
                }
                else
                {
                    break;
                }
            }
        }
        return idx;
    }
};
// @lc code=end
