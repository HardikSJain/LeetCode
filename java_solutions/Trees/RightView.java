package Trees;

import java.util.*;

/*
 * Question Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/
 * 
 * Company: Amazon
 * 
 * Result: Runtime: 1 ms, faster than 94.24% of Java online submissions for Binary Tree Right Side View.
    Memory Usage: 42.8 MB, less than 41.26% of Java online submissions for Binary Tree Right Side View.
 * Time complexity and space Complexity is O(N)
*/

// Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}


public class RightView {
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> ans = new ArrayList<Integer>();
        rightView(root, ans, 0);
        return ans;

    }

    private void rightView(TreeNode root, List<Integer> ans, int level) {
        if (root == null) {
            return;
        }

        if (level == ans.size()) {
            ans.add(root.val);
        }
        rightView(root.right, ans, level + 1);
        rightView(root.left, ans, level + 1);
    }
}

