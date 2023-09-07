/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
#include <iostream>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res, tmp;
        set<int> s1;
        for (int i : nums1)
        {
            s1.insert(i);
        }
        set<int> s2;
        for (int i : nums2)
        {
            s2.insert(i);
        } // 12//2
        merge(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(tmp));
        // 122
        set<int> s;
        int length = s.size();
        for (int i : tmp)
        {
            s.insert(i);
            if (s.size() == length)
                res.push_back(i);
            else
            {
                length = s.size();
            }
        }
        return res;
    }
};
// @lc code=end
