import java.util.*;

import javax.naming.spi.DirectoryManager;

/*
 * Question Link: https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
 * company: Amazon, Microsoft, OYO Rooms
*/

// Brute Force Solution, Time Complexity: O(N^2)

public class DiameterofTree {
    class Node {
        int data;
        Node left;
        Node right;
        Node(int data) {
            this.data = data;
            left = null;
            right = null;
        }
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node root) {
        // Your code here
        
        if(root == null){
            return 0;
        }
        
        int dia1 = diameter(root.left);
        int dia2 = diameter(root.right);
        int dia3 = height(root.left) + height(root.right) + 1;
        
        return Math.max(dia1, Math.max(dia2, dia3));
        
        
    }
    
    int height(Node root){
        if(root == null){
            return 0;
        }
        
        int left = height(root.left);
        int right = height(root.right);
        
        return Math.max(left, right) + 1;
        
        
        
    }


    // Optimised Solution, Time Complexity: O(N)
    class Treeinfo {
        int height;
        int diameter;

        Treeinfo(int height, int diameter){
            this.height = height;
            this.diameter = diameter;
        }
    }

    public static Treeinfo OptimiseddiameterOfTree(Node root){
        if (root == null) {
            return new Treeinfo(0, 0);
        }
        
        Treeinfo left = OptimiseddiameterOfTree(root.left);
        Treeinfo right = OptimiseddiameterOfTree(root.right);

        int myHeight = Math.max(left.height, right.height) + 1;

        int dia1 = left.diameter;
        int dia2 = right.diameter;
        int dia3 = left.height + right.height + 1;

        int myDiameter = Math.max(dia1, Math.max(dia2, dia3));

        Treeinfo myTreeInfo = new Treeinfo(myHeight, myDiameter);

        return myTreeInfo;
    }
    
}