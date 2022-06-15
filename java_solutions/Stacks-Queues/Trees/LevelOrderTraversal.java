import java.util.*;

/*
 * Question Link: https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/
 * 
 * Companies: Amazon, LinkedIn, Facebook, Microsoft, Oracle, Uber, Walmart, Google, Bloomberg
 * 
 * Result: Runtime: 1 ms, faster than 89.48% of Java online submissions for Binary Tree Level Order Traversal.
 * Memory Usage: 43.4 MB, less than 54.89% of Java online submissions for Binary Tree Level Order Traversal.
 * 
 * 
 */

public class LevelOrderTraversal {

    // defination of tree
    class TreeNode {
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
    
    // Main code
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> list = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        
        // edge case
        if(root == null){
            return list;
        }
        // if root is not null then we push it into queue as level 0
        queue.add(root);
        
        // then we iterate on the queue until its is empty
        while(!queue.isEmpty()){
            int queueLength = queue.size();

            // initialising an array to make array of integer values of each level
            List<Integer> level = new ArrayList<>();
            
            // interating over whole queue level by level, when for loop ends first time then each level is traversed and in next iteration of for loop new level is found out
            for (int i = 0; i < queueLength; i++) {
                // to hold the first element of queue and then checking its children
                TreeNode current = queue.poll();
                level.add(current.val);
                
                if(current.left != null){
                    queue.add(current.left);
                }
                if(current.right != null){
                    queue.add(current.right);
                }                
            }
            list.add(level);            
            
        }
        
        return list;
    }
}
