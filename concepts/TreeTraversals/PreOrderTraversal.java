import java.utils.*;

public class PreOrderTraversal {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        preOrder(root);
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

    static void preOrder(Node root) {
        if (root == null) {
            return;
        }

        System.out.print(root.data + " ");
        inOrder(root.left);
        inOrder(root.right);
    }
}
