/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 二叉树的右视图
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> ret;

    vector<int> rightSideView(TreeNode *root)
    {
        if (!root)
            return ret;
        ret.push_back(root->val);
        f(root, 1);
        return ret;
    }
    void f(TreeNode *root, int depth)
    {
        if (!root)
            return;
        if (depth > ret.size())
        {
            ret.push_back(root->val);
        }
        f(root->right, depth + 1);
        f(root->left, depth + 1);
    }
};
// @lc code=end
