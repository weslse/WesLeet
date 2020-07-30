/*
 * Solved by Weslse
 * 2020.07.30
 */

 // Problem
 // 543. Diameter of Binary Tree
 // Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
 // Example:
 // Given a binary tree
 //      1
 //		/ \
 //	   2   3
 //	  / \
 //	 4   5
 // Return 3, which is the length of the path[4, 2, 1, 3] or [5, 2, 1, 3].

 // Note: The length of path between two nodes is represented by the number of edges between them.

 // RESULT
 // Runtime: 56 ms, faster than 9.25% of C++ online submissions for Diameter of Binary Tree.
 // Memory Usage: 20.9 MB, less than 23.88% of C++ online submissions for Diameter of Binary Tree.


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


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
class Solution {
public:
	int maxDepth(TreeNode* r) {
		return r == nullptr ? 0 : max(maxDepth(r->left), maxDepth(r->right)) + 1;
	}

	int diameterOfBinaryTree(TreeNode* root) {
		if (root == nullptr)
			return 0;
		int l = diameterOfBinaryTree(root->left);
		int r = diameterOfBinaryTree(root->right);
		int d = maxDepth(root->left) + maxDepth(root->right);
		return max(l, max(r, d));
	}
};

