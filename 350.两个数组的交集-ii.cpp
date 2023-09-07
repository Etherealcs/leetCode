/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        vector<pair<int, int>> tmp;
        map<int, int> m1;
        for (int i : nums1)
        {
            if (m1.find(i) == m1.end())
                m1.insert({i, 1});
            else
            {
                m1[i]++;
            }
        }
        map<int, int> m2;
        for (int i : nums2)
        {
            if (m2.find(i) == m2.end())
            {
                m2.insert({i, 1});
            }
            else
            {
                m2[i]++;
            }
        }
        merge(m1.begin(), m1.end(), m2.begin(), m2.end(), back_inserter(tmp));
        set<int> s;
        int length = s.size();
        int minItem = 0;
        for (pair<int, int> i : tmp)
        {
            s.insert(i.first);
            minItem = min(m1[i.first], m2[i.first]);
            if (s.size() == length)
            {
                for (int idx = 0; idx < minItem; idx++)
                    res.push_back(i.first);
            }
            else
            {
                length = s.size();
            }
        }
        return res;
    }
};
//[]
// @lc code=end
