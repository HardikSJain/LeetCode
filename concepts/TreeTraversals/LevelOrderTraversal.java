import java.util.LinkedList;
import java.util.Queue;
import java.utils.*;

import org.w3c.dom.Node;

public class LevelOrderTraversal {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        Node root = createTree();

        // levelOrder(root, 4);
        // LevelOrderOptimised(root);
        levelsWithLevelOrder(root);
    }
    
    static Node createTree() {

        Node root = null;
        System.out.println("Enter Data: ");
        int data = sc.nextInt();

        if (data == -1) {
            return null;
        }

        root = new Node(data);

        System.out.println("Enter left for " + data);
        root.left = createTree();

        System.out.println("Enter right for " + data);
        root.right = createTree();

        return root;
    }

    // Brute Force approach Time complexity = O(N^2)
    static void levelOrder(Node root, int level) {
        if (root == null) {
            return;
        }

        if (level == 1) {
            System.out.println(root.data + " ");
        } else if (level > 1) {
            levelOrder(root.left, level - 1);
            levelOrder(root.right, level - 1);
        }
    }
    
    // Optimised approach Time Complexity O(N) by using Queue
    static void LevelOrderOptimised(Node root) {
        Queue<Node> queue = new LinkedList<>();

        queue.add(root);

        while (!queue.isEmpty()) {
            Node current = queue.poll();
            System.out.println(current.data);

            if (root.left != null) {
                queue.add(current.left);
            }

            if (root.right != null) {
                queue.add(current.right);
            }
        }

    }
    
    // Here we cant Specify the level upto which the traversal shall take place

    static void levelsWithLevelOrder(Node root) {
        Queue<Node> queue = new LinkedList<>();
        
        queue.add(root);
        queue.add(null);

        while (!queue.isEmpty()) {
            Node current = queue.poll();

            if (current == null) {
                if (queue.isEmpty()) {
                    return;
                }

                queue.add(null);
                System.out.println();
                continue;
            }
            
            System.out.println(current.data);

            if (root.left != null) {
                queue.add(current.left);
            }

            if (root.right != null) {
                queue.add(current.right);
            }
        }
    }
}
