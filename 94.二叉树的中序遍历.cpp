/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> ret;
    vector<int> inorderTraversal(TreeNode *root)
    {
        MidOrder(root);
        return ret;
    }
    void MidOrder(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        MidOrder(root->left);
        ret.push_back(root->val);
        MidOrder(root->right);
    }
};
// @lc code=end
