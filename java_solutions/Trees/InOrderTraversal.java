package Trees;

import java.util.*;

/*
 * Question Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
 * 
 * Companies: Microsoft
 * 
 * Result: Runtime: 0 ms, faster than 100.00% of Java online submissions for Binary Tree Inorder Traversal.
 * Memory Usage: 42 MB, less than 63.58% of Java online submissions for Binary Tree Inorder Traversal.
 * 
*/

public class InOrderTraversal {

    // Defination of Tree
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        helperTraversal(root, list);
        return list;

    }

    private void helperTraversal(TreeNode root, List<Integer> list) {
        if (root == null) {
            return;
        }

        helperTraversal(root.left, list);
        list.add(root.val);
        helperTraversal(root.right, list);
    }
}
